import { initializeApp } from "https://www.gstatic.com/firebasejs/11.6.1/firebase-app.js";
import { 
    getAuth, 
    signInAnonymously, 
    signInWithCustomToken, 
    onAuthStateChanged,
    createUserWithEmailAndPassword,
    signInWithEmailAndPassword,
    signOut,
    updateProfile
} from "https://www.gstatic.com/firebasejs/11.6.1/firebase-auth.js";
import { 
    getFirestore, 
    doc, 
    setDoc, 
    getDoc,
    serverTimestamp,
    setLogLevel
} from "https://www.gstatic.com/firebasejs/11.6.1/firebase-firestore.js";

// --- GLOBAL STATE ---
let app, db, auth;
let userProfile = null; // Stores Firebase Auth user + Firestore profile data
let currentPage = 'login';
let isAuthReady = false;

// --- MANDATORY GLOBAL VARIABLE INITIALIZATION ---
const appId = typeof __app_id !== 'undefined' ? __app_id : 'default-app-id';
const firebaseConfig = typeof __firebase_config !== 'undefined' ? JSON.parse(__firebase_config) : {};
const initialAuthToken = typeof __initial_auth_token !== 'undefined' ? __initial_auth_token : null;
// --- END MANDATORY INITIALIZATION ---

// Set Firebase log level for debugging
setLogLevel('debug');

// --- UTILITY FUNCTIONS ---
const $ = (selector) => document.querySelector(selector);
const $$ = (selector) => document.querySelectorAll(selector);

/**
 * Renders the main content by clearing the root and inserting the new page.
 */
const renderApp = (htmlContent) => {
    const root = $('#app-root');
    if (root) {
        root.innerHTML = htmlContent;
    }
};

const createLoadingHTML = (text = 'Loading...') => `
    <div class="flex items-center justify-center p-4">
        <svg class="animate-spin -ml-1 mr-3 h-5 w-5 text-[#fcba03]" xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 24 24">
            <circle class="opacity-25" cx="12" cy="12" r="10" stroke="currentColor" stroke-width="4"></circle>
            <path class="opacity-75" fill="currentColor" d="M4 12a8 8 0 018-8V0C5.373 0 0 5.373 0 12h4zm2 5.291A7.962 7.962 0 014 12H0c0 3.042 1.135 5.824 3 7.938l3-2.647z"></path>
        </svg>
        ${text}
    </div>
`;

// --- FIREBASE INITIALIZATION AND AUTH ---

/**
 * Initializes Firebase and sets up the Auth State Listener.
 */
const initFirebase = async () => {
    if (!Object.keys(firebaseConfig).length) {
        console.error("Firebase configuration is missing.");
        renderApp('<div class="text-center text-red-400 p-8 bg-black/50 rounded-lg max-w-lg mx-auto">Error: Firebase configuration is missing.</div>');
        return;
    }

    try {
        app = initializeApp(firebaseConfig);
        db = getFirestore(app);
        auth = getAuth(app);

        // Initial Authentication
        if (initialAuthToken) {
            await signInWithCustomToken(auth, initialAuthToken);
        } else {
            await signInAnonymously(auth);
        }

        // Auth State Listener
        onAuthStateChanged(auth, async (currentUser) => {
            if (currentUser) {
                await fetchUserProfile(currentUser);
            } else {
                userProfile = null;
            }
            isAuthReady = true;
            if (userProfile) {
                currentPage = 'profile';
            } else if (currentPage === 'profile') {
                currentPage = 'login'; // Redirect to login if signed out
            }
            renderPage();
        });
    } catch (e) {
        console.error("Firebase Initialization Error:", e);
        renderApp(`<div class="text-center text-red-400 p-8 bg-black/50 rounded-lg max-w-lg mx-auto">Error: Failed to initialize Firebase services. ${e.message}</div>`);
    }
};

/**
 * Fetches user profile from Firestore and merges with Auth data.
 */
const fetchUserProfile = async (currentUser) => {
    const userRef = doc(db, `artifacts/${appId}/users/${currentUser.uid}/profiles`, 'userProfile');
    try {
        const userSnap = await getDoc(userRef);
        if (userSnap.exists()) {
            userProfile = { ...currentUser, ...userSnap.data() };
        } else {
            // Default profile for new users
            userProfile = { ...currentUser, role: 'User', name: currentUser.displayName || 'Anonymous User' };
        }
    } catch (e) {
        console.error("Error fetching user profile:", e);
        userProfile = { ...currentUser, role: 'User', name: currentUser.displayName || 'Anonymous User' }; // Use default on error
    }
};

/**
 * Updates the user's profile data in Firestore.
 */
const updateUserProfileInDB = async (uid, data) => {
    if (!db) return;
    const profileRef = doc(db, `artifacts/${appId}/users/${uid}/profiles`, 'userProfile');
    await setDoc(profileRef, { ...data, updatedAt: serverTimestamp() }, { merge: true });
};


// --- PAGE RENDERING LOGIC ---

const renderPage = () => {
    if (!isAuthReady) {
        renderApp(createLoadingHTML('Authenticating...'));
        return;
    }

    let html = '';
    switch (currentPage) {
        case 'login':
            html = renderLoginView();
            break;
        case 'register':
            html = renderRegisterView();
            break;
        case 'profile':
            if (userProfile) {
                html = renderProfileView();
            } else {
                currentPage = 'login';
                html = renderLoginView();
            }
            break;
        default:
            html = renderLoginView();
    }
    renderApp(html);
    // Attach event listeners after rendering
    attachEventListeners();
};

const navigateTo = (page) => {
    currentPage = page;
    renderPage();
};

// --- SHARED UI COMPONENTS ---

const Card = (title, content, maxWidth = 'max-w-lg') => `
    <div class="w-full ${maxWidth} mx-auto p-8 rounded-2xl shadow-xl transition duration-300 relative z-20 glass-card">
        <h2 class="text-3xl font-extrabold text-white mb-8 text-center"
            style="text-shadow: 0 0 5px rgba(0, 0, 0, 0.7); border-bottom: 2px solid rgba(252, 186, 3, 0.5); padding-bottom: 1rem;"
        >
            ${title}
        </h2>
        ${content}
    </div>
`;

const InputField = (id, label, type, value = '', placeholder = '', required = true, error = '') => `
    <div>
        <label for="${id}" class="block text-sm font-medium text-white mb-1">${label}</label>
        <input
            type="${type}"
            id="${id}"
            name="${id}"
            value="${value}"
            placeholder="${placeholder}"
            class="w-full p-3 border-2 rounded-lg focus:outline-none transition duration-200 bg-white/5 text-white placeholder-white/70 
            ${error ? 'border-red-500' : 'border-white/50 focus:border-[#fcba03]'}"
            ${required ? 'required' : ''}
        />
        ${error ? `<p class="text-red-300 text-xs mt-1">${error}</p>` : ''}
    </div>
`;

const PrimaryButton = (text, id, disabled = false) => `
    <button
        type="submit"
        id="${id}"
        class="w-full bg-[#fcba03] hover:bg-[#e0a902] text-gray-900 font-bold py-3 px-4 rounded-lg transition duration-300 ease-in-out shadow-md disabled:opacity-50"
        ${disabled ? 'disabled' : ''}
    >
        ${text}
    </button>
`;

// --- LOGIN VIEW ---

const renderLoginView = (message = '', isError = false) => {
    const content = `
        <form id="login-form" class="space-y-6">
            ${InputField('login-email', 'Email Address', 'email', '', 'email@example.com')}
            ${InputField('login-password', 'Password', 'password')}

            <div id="login-message" class="p-3 rounded-lg text-sm hidden"></div>

            ${PrimaryButton('Sign In', 'login-submit')}
        </form>
        <div class="mt-6 text-center text-sm text-white">
            Don't have an account? 
            <button id="nav-register" class="text-[#fcba03] hover:text-[#e0a902] font-medium">
                Register Now
            </button>
        </div>
    `;
    return Card("Sign In to Daa'am-ul-Hayat", content);
};

const handleLogin = async (e) => {
    e.preventDefault();
    const email = $('#login-email').value;
    const password = $('#login-password').value;
    const submitBtn = $('#login-submit');
    const messageDiv = $('#login-message');
    
    submitBtn.innerHTML = createLoadingHTML('Signing In...');
    submitBtn.disabled = true;
    messageDiv.classList.add('hidden');

    try {
        await signInWithEmailAndPassword(auth, email, password);
        // Auth State Listener handles the navigation to profile
    } catch (error) {
        console.error("Login Error:", error);
        const msg = (error.code === 'auth/invalid-credential') ? 
            'Invalid email or password.' : `Login failed: ${error.message}`;
        
        messageDiv.textContent = msg;
        messageDiv.className = "p-3 rounded-lg text-sm bg-red-900/50 text-red-300 shadow-lg border border-red-500/50";
        messageDiv.classList.remove('hidden');

    } finally {
        submitBtn.innerHTML = 'Sign In';
        submitBtn.disabled = false;
    }
};

// --- REGISTER VIEW ---

const renderRegisterView = (formState = {}, formErrors = {}) => {
    const formData = { 
        name: formState.name || '', email: formState.email || '', 
        role: formState.role || 'User', password: formState.password || '', 
        confirmPassword: formState.confirmPassword || ''
    };
    const content = `
        <form id="register-form" class="space-y-6">
            <div class="grid grid-cols-1 md:grid-cols-2 gap-6">
                ${InputField('register-name', 'Full Name', 'text', formData.name, 'e.g. Sara Ahmed', true, formErrors.name)}
                <div>
                    <label for="register-role" class="block text-sm font-medium text-white mb-1">I am registering as</label>
                    <select
                        id="register-role"
                        name="role"
                        class="w-full p-3 border-2 rounded-lg focus:outline-none transition duration-200 bg-white/5 text-white placeholder-white/70 
                        border-white/50 focus:border-[#fcba03]"
                        required
                    >
                        <option value="User" class="bg-gray-800 text-white" ${formData.role === 'User' ? 'selected' : ''}>Standard User (Donor/Volunteer)</option>
                        <option value="Admin" class="bg-gray-800 text-white" ${formData.role === 'Admin' ? 'selected' : ''}>NGO/Platform Admin (Requires approval)</option>
                    </select>
                </div>
            </div>

            ${InputField('register-email', 'Email Address', 'email', formData.email, 'email@example.com', true, formErrors.email)}

            <div class="grid grid-cols-1 md:grid-cols-2 gap-6">
                ${InputField('register-password', 'Password', 'password', '', '', true, formErrors.password)}
                ${InputField('register-confirmPassword', 'Confirm Password', 'password', '', '', true, formErrors.confirmPassword)}
            </div>

            <div id="register-message" class="p-3 rounded-lg text-sm hidden"></div>

            ${PrimaryButton('Register Account', 'register-submit')}
        </form>
        <div class="mt-6 text-center text-sm text-white">
            Already have an account?
            <button id="nav-login" class="text-[#fcba03] hover:text-[#e0a902] font-medium">
                Sign In
            </button>
        </div>
    `;
    return Card("Register for Daa'am-ul-Hayat", content);
};

const handleRegister = async (e) => {
    e.preventDefault();
    const formData = {
        name: $('#register-name').value,
        email: $('#register-email').value,
        password: $('#register-password').value,
        confirmPassword: $('#register-confirmPassword').value,
        role: $('#register-role').value
    };
    
    const submitBtn = $('#register-submit');
    const messageDiv = $('#register-message');
    messageDiv.classList.add('hidden');
    let errors = {};

    // Validation
    if (!formData.name) errors.name = "Name is required.";
    if (!formData.email) errors.email = "Email is required.";
    if (!/\S+@\S+\.\S+/.test(formData.email)) errors.email = "Email is invalid.";
    if (formData.password.length < 6) errors.password = "Password must be at least 6 characters.";
    if (formData.password !== formData.confirmPassword) errors.confirmPassword = "Passwords do not match.";

    if (Object.keys(errors).length > 0) {
        messageDiv.textContent = 'Please correct the errors in the form.';
        messageDiv.className = "p-3 rounded-lg text-sm bg-red-900/50 text-red-300 shadow-lg border border-red-500/50";
        messageDiv.classList.remove('hidden');
        // Re-render to show errors
        renderApp(renderRegisterView(formData, errors)); 
        attachEventListeners(); // Re-attach event listeners after re-render
        return;
    }

    submitBtn.innerHTML = createLoadingHTML('Registering...');
    submitBtn.disabled = true;

    try {
        const userCredential = await createUserWithEmailAndPassword(auth, formData.email, formData.password);
        const user = userCredential.user;

        // 1. Update user display name in Firebase Auth
        await updateProfile(user, { displayName: formData.name });

        // 2. Save custom profile data (Role) to Firestore
        const profileData = {
            uid: user.uid,
            name: formData.name,
            email: formData.email,
            role: formData.role, 
            createdAt: serverTimestamp(),
        };
        await updateUserProfileInDB(user.uid, profileData);
        
        userProfile = { ...user, ...profileData }; // Update local state
        
        messageDiv.textContent = `Success! Welcome to Daa'am-ul-Hayat as a ${formData.role}. Redirecting...`;
        messageDiv.className = "p-3 rounded-lg text-sm bg-[#ffebcd]/20 text-white shadow-lg border border-[#fcba03]/50";
        messageDiv.classList.remove('hidden');
        
        setTimeout(() => navigateTo('profile'), 1500);

    } catch (error) {
        console.error("Registration Error:", error);
        const msg = (error.code === 'auth/email-already-in-use') ? 
            'The email address is already in use.' : `Registration failed: ${error.message}`;
        
        messageDiv.textContent = msg;
        messageDiv.className = "p-3 rounded-lg text-sm bg-red-900/50 text-red-300 shadow-lg border border-red-500/50";
        messageDiv.classList.remove('hidden');
        
    } finally {
        submitBtn.innerHTML = 'Register Account';
        submitBtn.disabled = false;
    }
};

// --- PROFILE VIEW ---

const renderProfileView = (isEditing = false, statusMessage = '') => {
    const user = userProfile;
    const isUserAdmin = user?.role === 'Admin';
    const currentName = user?.name || user?.displayName || '';

    const UserContent = `
        <h3 class="text-xl font-semibold text-white mb-4 border-b border-white/20 pb-2">Activity Summary</h3>
        <div class="grid grid-cols-1 sm:grid-cols-3 gap-4 text-center">
            <div class="p-4 glass-card rounded-lg border-white/20">
                <p class="text-3xl font-bold text-[#fcba03]">5</p>
                <p class="text-sm text-white/90">Pledges Made</p>
            </div>
            <div class="p-4 glass-card rounded-lg border-white/20">
                <p class="text-3xl font-bold text-[#fcba03]">42</p>
                <p class="text-sm text-white/90">Hours Volunteered</p>
            </div>
            <div class="p-4 glass-card rounded-lg border-white/20">
                <p class="text-3xl font-bold text-[#fcba03]">3</p>
                <p class="text-sm text-white/90">Badges Earned</p>
            </div>
        </div>

        <h3 class="text-xl font-semibold text-white mt-8 mb-4 border-b border-white/20 pb-2">My Needs & Pledges</h3>
        <ul class="space-y-3">
            <li class="p-3 border rounded-lg flex justify-between items-center text-white/90 glass-card border-white/30">
                Need: 50 School Bags <span class="text-xs px-2 py-1 bg-green-700/50 text-white rounded-full">FULFILLED</span>
            </li>
            <li class="p-3 border rounded-lg flex justify-between items-center text-white/90 glass-card border-white/30">
                Pledge: Food Rescue (Aug 20) <span class="text-xs px-2 py-1 bg-[#fcba03]/70 text-gray-900 rounded-full">PENDING</span>
            </li>
        </ul>
    `;

    const AdminContent = `
        <h3 class="text-xl font-semibold text-white mb-4 border-b border-white/20 pb-2">Admin Dashboard Overview</h3>
        <div class="grid grid-cols-1 md:grid-cols-2 gap-4">
            <div class="p-4 glass-card rounded-lg border-white/20">
                <p class="text-sm text-white/70">Active Alerts (C9)</p>
                <p class="text-3xl font-bold text-red-400">1</p>
            </div>
            <div class="p-4 glass-card rounded-lg border-white/20">
                <p class="text-sm text-white/70">Open Volunteer Slots (C2)</p>
                <p class="text-3xl font-bold text-[#fcba03]">15</p>
            </div>
            <button class="col-span-full p-3 bg-[#fcba03] text-gray-900 font-bold rounded-lg hover:bg-[#e0a902] transition">
                Manage Opportunities & Needs (C1/C2)
            </button>
            <button class="col-span-full p-3 bg-gray-700/50 text-white font-medium rounded-lg hover:bg-gray-800 transition">
                View Impact Tracker (C7)
            </button>
        </div>
    `;

    const profileSection = `
        <div class="w-full mx-auto p-4 md:p-8 relative z-10">
            <div class="flex flex-col sm:flex-row justify-between items-start sm:items-center mb-6 border-b border-white/30 pb-4">
                <h1 class="text-3xl md:text-4xl font-extrabold text-white mb-4 sm:mb-0" style="text-shadow: 0 0 5px rgba(0, 0, 0, 0.5);">
                    ${currentName}'s Profile
                </h1>
                <button
                    id="sign-out-btn"
                    class="px-4 py-2 bg-red-500/80 text-white text-sm font-medium rounded-lg hover:bg-red-600 transition backdrop-blur-sm"
                >
                    Sign Out
                </button>
            </div>

            <div class="glass-card p-6 rounded-xl shadow-2xl space-y-6 border border-white/30">
                
                <div class="flex justify-between items-center border-b border-white/30 pb-4 text-white flex-wrap gap-4">
                    <div>
                        <p class="text-sm text-white/70">Role</p>
                        <span class="text-xl font-bold ${isUserAdmin ? 'text-purple-400' : 'text-[#fcba03]'}">
                            ${user?.role || 'Guest'}
                        </span>
                    </div>
                    <div>
                        <p class="text-sm text-white/70">Member ID</p>
                        <p class="text-md font-mono text-white break-all text-right">${user?.uid || 'N/A'}</p>
                    </div>
                </div>

                <div class="py-4 border-b border-white/30">
                    <h3 class="text-xl font-semibold text-white mb-2">Basic Information</h3>
                    ${isEditing ? `
                        <form id="edit-profile-form" class="space-y-3">
                            <div>
                                <label class="block text-sm font-medium text-white">Name</label>
                                <input
                                    type="text"
                                    id="profile-name-input"
                                    value="${currentName}"
                                    class="w-full p-2 border rounded-lg bg-white/5 text-white focus:ring-[#fcba03] focus:border-[#fcba03]"
                                    required
                                />
                            </div>
                            <p class="text-sm text-white/70">Email: ${user?.email || 'Not available'}</p>
                            <div class="flex space-x-3">
                                <button type="submit" id="save-profile-btn" class="px-4 py-2 bg-[#fcba03] text-gray-900 font-bold rounded-lg hover:bg-[#e0a902] transition text-sm">Save</button>
                                <button type="button" id="cancel-edit-btn" class="px-4 py-2 bg-gray-500/50 text-white rounded-lg hover:bg-gray-400 transition text-sm">Cancel</button>
                            </div>
                            <p id="profile-status-message" class="text-sm text-[#fcba03] mt-2">${statusMessage}</p>
                        </form>
                    ` : `
                        <div class="flex justify-between items-center text-white">
                            <p class="text-lg font-medium text-white">Name: ${currentName}</p>
                            <button 
                                id="edit-profile-btn"
                                class="px-3 py-1 border border-[#fcba03] text-[#fcba03] text-sm rounded-lg hover:bg-[#fcba03]/20 transition"
                            >
                                Edit
                            </button>
                        </div>
                        <p class="text-sm text-white/70 mt-2">Email: ${user?.email || 'Not available'}</p>
                    `}
                </div>

                <!-- Dynamic Content based on Role -->
                ${isUserAdmin ? AdminContent : UserContent}

            </div>
        </div>
    `;
    return profileSection;
};

const handleEditProfile = async (e) => {
    e.preventDefault();
    const newName = $('#profile-name-input').value.trim();
    const saveBtn = $('#save-profile-btn');
    const messageDiv = $('#profile-status-message');
    
    if (!newName) return;
    
    saveBtn.innerHTML = createLoadingHTML('Saving...');
    saveBtn.disabled = true;
    messageDiv.textContent = 'Saving...';
    
    try {
        // Update Auth profile (display name)
        await updateProfile(auth.currentUser, { displayName: newName });
        
        // Update Firestore profile and get a clean local update
        await updateUserProfileInDB(userProfile.uid, { name: newName });
        await fetchUserProfile(auth.currentUser); // Refetch to sync local state
        
        // Success
        renderApp(renderProfileView(false, 'Profile updated successfully!'));
        
    } catch (error) {
        console.error("Profile Update Error:", error);
        renderApp(renderProfileView(true, 'Failed to update profile.'));
    } finally {
        setTimeout(() => renderApp(renderProfileView(false)), 3000);
    }
    attachEventListeners();
};

const handleSignOut = async () => {
    if (auth) {
        try {
            await signOut(auth);
            // Auth State Listener will handle navigation
        } catch (e) {
            console.error("Sign Out Error:", e);
        }
    }
};


// --- EVENT LISTENERS ---

const attachEventListeners = () => {
    // General Navigation
    $('#nav-register')?.addEventListener('click', () => navigateTo('register'));
    $('#nav-login')?.addEventListener('click', () => navigateTo('login'));

    // Forms
    $('#login-form')?.addEventListener('submit', handleLogin);
    $('#register-form')?.addEventListener('submit', handleRegister);

    // Profile Actions
    $('#sign-out-btn')?.addEventListener('click', handleSignOut);
    $('#edit-profile-btn')?.addEventListener('click', () => {
        // Rerender profile view in edit mode
        renderApp(renderProfileView(true, ''));
        attachEventListeners(); // Re-attach listeners after re-render
    });
    $('#cancel-edit-btn')?.addEventListener('click', () => {
        // Rerender profile view in display mode
        renderApp(renderProfileView(false, ''));
        attachEventListeners(); // Re-attach listeners after re-render
    });
    $('#edit-profile-form')?.addEventListener('submit', handleEditProfile);
};

// --- START APPLICATION ---
window.onload = initFirebase;