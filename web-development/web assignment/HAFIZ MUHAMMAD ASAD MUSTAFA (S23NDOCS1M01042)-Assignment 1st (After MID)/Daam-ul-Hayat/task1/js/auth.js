/**
 * Daa'am-ul-Hayat Authentication Page JavaScript
 * Handles authentication page specific functionality
 */

// DOM Ready
document.addEventListener('DOMContentLoaded', function() {
    // Initialize auth page components
    initAuthForm();
    initSocialLoginButtons();
    
    console.log('Authentication page initialized');
});

// Authentication Form Handling
function initAuthForm() {
    const loginForm = document.getElementById('loginForm');
    const registerForm = document.getElementById('registerForm');
    
    if (loginForm) {
        loginForm.addEventListener('submit', function(e) {
            e.preventDefault();
            handleLoginFormSubmission();
        });
    }
    
    if (registerForm) {
        registerForm.addEventListener('submit', function(e) {
            e.preventDefault();
            handleRegisterFormSubmission();
        });
    }
}

// Handle Login Form Submission
function handleLoginFormSubmission() {
    const form = document.getElementById('loginForm');
    
    // Validate form
    if (validateAuthForm(form)) {
        // Show loading state
        const submitButton = form.querySelector('button[type="submit"]');
        const originalText = submitButton.textContent;
        submitButton.textContent = 'Signing in...';
        submitButton.disabled = true;
        
        // Get form data
        const email = document.getElementById('email').value;
        const password = document.getElementById('password').value;
        const remember = document.getElementById('remember').checked;
        
        // Simulate API call delay
        setTimeout(() => {
            // Reset button
            submitButton.textContent = originalText;
            submitButton.disabled = false;
            
            // In a real implementation, you would:
            // 1. Send credentials to authentication API
            // 2. Handle response (success/error)
            // 3. Store token in localStorage/sessionStorage
            // 4. Redirect to appropriate dashboard
            
            // For demo purposes, show success and redirect
            window.DaaamUlHayat.showToast('Login successful! Redirecting...', 'success');
            
            // Redirect based on role (in real app, this would come from API)
            setTimeout(() => {
                // For demo, redirect to user dashboard
                window.location.href = '../user/dashboard-user.html';
            }, 1500);
        }, 1500);
    }
}

// Handle Register Form Submission
function handleRegisterFormSubmission() {
    const form = document.getElementById('registerForm');
    
    // Validate form
    if (validateAuthForm(form)) {
        // Show loading state
        const submitButton = form.querySelector('button[type="submit"]');
        const originalText = submitButton.textContent;
        submitButton.textContent = 'Creating account...';
        submitButton.disabled = true;
        
        // Get form data
        const fullName = document.getElementById('fullName').value;
        const email = document.getElementById('email').value;
        const password = document.getElementById('password').value;
        const confirmPassword = document.getElementById('confirmPassword').value;
        const role = document.getElementById('role').value;
        
        // Simulate API call delay
        setTimeout(() => {
            // Reset button
            submitButton.textContent = originalText;
            submitButton.disabled = false;
            
            // In a real implementation, you would:
            // 1. Send registration data to API
            // 2. Handle response (success/error)
            // 3. Store token and user data
            // 4. Redirect to appropriate page
            
            // For demo purposes, show success and redirect
            window.DaaamUlHayat.showToast('Account created successfully! Welcome to Daa\'am-ul-Hayat.', 'success');
            
            // Redirect based on role
            setTimeout(() => {
                // For demo, redirect to user dashboard
                window.location.href = '../user/dashboard-user.html';
            }, 1500);
        }, 1500);
    }
}

// Form Validation
function validateAuthForm(form) {
    let isValid = true;
    
    // Clear previous errors
    const errorElements = form.querySelectorAll('.field-error');
    errorElements.forEach(el => el.remove());
    
    const errorFields = form.querySelectorAll('.form-control.error');
    errorFields.forEach(el => el.classList.remove('error'));
    
    // Validate required fields
    const requiredFields = form.querySelectorAll('[required]');
    requiredFields.forEach(field => {
        if (!field.value.trim()) {
            isValid = false;
            field.classList.add('error');
            
            // Add error message
            const errorElement = document.createElement('div');
            errorElement.className = 'field-error';
            errorElement.textContent = 'This field is required';
            field.parentNode.appendChild(errorElement);
        }
    });
    
    // Validate email format
    const emailField = form.querySelector('input[type="email"]');
    if (emailField && emailField.value) {
        const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
        if (!emailRegex.test(emailField.value)) {
            isValid = false;
            emailField.classList.add('error');
            
            const errorElement = document.createElement('div');
            errorElement.className = 'field-error';
            errorElement.textContent = 'Please enter a valid email address';
            emailField.parentNode.appendChild(errorElement);
        }
    }
    
    // Validate password strength (if password field exists)
    const passwordField = form.querySelector('input[type="password"]');
    if (passwordField && passwordField.value) {
        if (passwordField.value.length < 6) {
            isValid = false;
            passwordField.classList.add('error');
            
            const errorElement = document.createElement('div');
            errorElement.className = 'field-error';
            errorElement.textContent = 'Password must be at least 6 characters';
            passwordField.parentNode.appendChild(errorElement);
        }
    }
    
    // Validate password confirmation (if confirmPassword field exists)
    const confirmPasswordField = document.getElementById('confirmPassword');
    if (confirmPasswordField) {
        const password = document.getElementById('password').value;
        if (confirmPasswordField.value !== password) {
            isValid = false;
            confirmPasswordField.classList.add('error');
            
            const errorElement = document.createElement('div');
            errorElement.className = 'field-error';
            errorElement.textContent = 'Passwords do not match';
            confirmPasswordField.parentNode.appendChild(errorElement);
        }
    }
    
    return isValid;
}

// Social Login Buttons
function initSocialLoginButtons() {
    const socialButtons = document.querySelectorAll('.social-btn');
    
    socialButtons.forEach(button => {
        button.addEventListener('click', function() {
            const provider = this.textContent.trim();
            window.DaaamUlHayat.showToast(`Redirecting to ${provider} for authentication...`, 'info');
            
            // In a real implementation, you would:
            // 1. Redirect to OAuth provider
            // 2. Handle OAuth callback
            // 3. Exchange code for token
            // 4. Store user data and token
            // 5. Redirect to dashboard
            
            // For demo, just show message
            setTimeout(() => {
                window.DaaamUlHayat.showToast(`${provider} authentication successful!`, 'success');
                setTimeout(() => {
                    window.location.href = '../user/dashboard-user.html';
                }, 1000);
            }, 1500);
        });
    });
}

// Password Visibility Toggle
function togglePasswordVisibility(fieldId) {
    const field = document.getElementById(fieldId);
    const toggleButton = field.parentNode.querySelector('.password-toggle');
    
    if (field && toggleButton) {
        if (field.type === 'password') {
            field.type = 'text';
            toggleButton.textContent = 'Hide';
        } else {
            field.type = 'password';
            toggleButton.textContent = 'Show';
        }
    }
}

// Export functions for use in other modules
window.AuthPage = {
    initAuthForm,
    handleLoginFormSubmission,
    handleRegisterFormSubmission,
    validateAuthForm,
    initSocialLoginButtons,
    togglePasswordVisibility
};