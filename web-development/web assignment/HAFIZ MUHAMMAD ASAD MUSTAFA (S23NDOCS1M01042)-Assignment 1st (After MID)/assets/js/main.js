/**
 * Daa'am-ul-Hayat Main JavaScript File
 * Handles global functionality, navigation, and shared components
 */

// DOM Ready
document.addEventListener('DOMContentLoaded', function() {
    // Initialize all components
    initMobileMenu();
    initRoleSwitcher();
    initLanguageSelector();
    initSearchFunctionality();
    initGeolocation();
    initPageTransitions();
    initAccessibilityFeatures();
    initCarousels();
    
    // Initialize any animations
    initScrollAnimations();
});

// Mobile Menu Toggle
function initMobileMenu() {
    const hamburger = document.querySelector('.hamburger');
    const navMenu = document.querySelector('.nav-menu');
    
    if (hamburger && navMenu) {
        hamburger.addEventListener('click', function() {
            hamburger.classList.toggle('active');
            navMenu.classList.toggle('active');
        });
        
        // Close menu when clicking on a link
        document.querySelectorAll('.nav-link').forEach(link => {
            link.addEventListener('click', () => {
                hamburger.classList.remove('active');
                navMenu.classList.remove('active');
            });
        });
    }
}

// Role Switcher Functionality
function initRoleSwitcher() {
    const roleSelector = document.getElementById('roleSelector');
    
    if (roleSelector) {
        roleSelector.addEventListener('change', function() {
            const selectedRole = this.value;
            // Here you would typically update the UI based on role
            // For now, we'll just show a toast message
            showToast(`Switched to ${selectedRole} view`, 'info');
            
            // In a real implementation, you would:
            // 1. Update dashboard content
            // 2. Show/hide role-specific elements
            // 3. Change navigation items
            // 4. Update user profile display
        });
    }
}

// Language Selector Functionality
function initLanguageSelector() {
    const languageSelector = document.getElementById('languageSelector');
    
    if (languageSelector) {
        languageSelector.addEventListener('change', function() {
            const selectedLang = this.value;
            // In a real implementation, you would:
            // 1. Load translated content
            // 2. Update UI text
            // 3. Save preference to localStorage
            showToast(`Language changed to ${selectedLang}`, 'info');
        });
    }
}

// Search Functionality
function initSearchFunctionality() {
    const searchInput = document.getElementById('searchInput');
    const searchBtn = document.querySelector('.search-btn');
    
    if (searchInput && searchBtn) {
        // Search on button click
        searchBtn.addEventListener('click', function() {
            performSearch(searchInput.value);
        });
        
        // Search on Enter key
        searchInput.addEventListener('keypress', function(e) {
            if (e.key === 'Enter') {
                performSearch(searchInput.value);
            }
        });
    }
}

function performSearch(query) {
    if (query.trim() !== '') {
        // In a real implementation, you would:
        // 1. Send query to search endpoint
        // 2. Display results
        // 3. Update URL
        showToast(`Searching for "${query}"`, 'info');
    }
}

// Geolocation Functionality
function initGeolocation() {
    const geoBtn = document.getElementById('geoLocationBtn');
    
    if (geoBtn) {
        geoBtn.addEventListener('click', function() {
            // Check if geolocation is supported
            if ('geolocation' in navigator) {
                // Show privacy confirmation dialog
                showLocationConfirmation(() => {
                    // Get current position
                    navigator.geolocation.getCurrentPosition(
                        function(position) {
                            const lat = position.coords.latitude;
                            const lon = position.coords.longitude;
                            // In a real implementation, you would:
                            // 1. Update map view
                            // 2. Search for nearby needs
                            // 3. Save location preference
                            showToast('Location detected successfully', 'success');
                        },
                        function(error) {
                            console.error('Geolocation error:', error);
                            showToast('Unable to get your location', 'error');
                        },
                        {
                            enableHighAccuracy: true,
                            timeout: 10000,
                            maximumAge: 60000
                        }
                    );
                });
            } else {
                showToast('Geolocation is not supported by your browser', 'error');
            }
        });
    }
}

// Show location confirmation dialog
function showLocationConfirmation(callback) {
    // Create confirmation modal
    const modal = document.createElement('div');
    modal.className = 'location-modal glass-effect';
    modal.innerHTML = `
        <div class="modal-content">
            <h3>Location Permission</h3>
            <p>We need your location to show nearby needs and volunteers. Your location data will only be used to improve your experience.</p>
            <div class="modal-actions">
                <button id="denyLocation" class="btn btn-outline">Deny</button>
                <button id="allowLocation" class="btn btn-primary">Allow</button>
            </div>
        </div>
    `;
    
    document.body.appendChild(modal);
    
    // Handle button clicks
    document.getElementById('denyLocation').addEventListener('click', function() {
        document.body.removeChild(modal);
        showToast('Location permission denied', 'info');
    });
    
    document.getElementById('allowLocation').addEventListener('click', function() {
        document.body.removeChild(modal);
        if (callback && typeof callback === 'function') {
            callback();
        }
    });
}

// Page Transitions
function initPageTransitions() {
    // Add click handlers to all internal links for smooth transitions
    document.querySelectorAll('a[href^="./"], a[href^="/"], a[href^="?"]').forEach(link => {
        // Skip if it's a hash link or has a specific class to prevent transitions
        if (!link.getAttribute('href').startsWith('#') && !link.classList.contains('no-transition')) {
            link.addEventListener('click', function(e) {
                // Don't handle external links or links with target="_blank"
                if (this.hostname !== window.location.hostname || this.target === '_blank') {
                    return;
                }
                
                // Prevent default navigation
                e.preventDefault();
                const href = this.getAttribute('href');
                
                // Apply transition effect
                document.body.classList.add('page-transition');
                
                // Navigate after transition
                setTimeout(() => {
                    window.location.href = href;
                }, 450);
            });
        }
    });
}

// Scroll Animations (Intersection Observer)
function initScrollAnimations() {
    // Check if IntersectionObserver is supported
    if ('IntersectionObserver' in window) {
        const observerOptions = {
            root: null,
            rootMargin: '0px',
            threshold: 0.1
        };
        
        const observer = new IntersectionObserver((entries) => {
            entries.forEach(entry => {
                if (entry.isIntersecting) {
                    entry.target.classList.add('fade-in-up');
                    observer.unobserve(entry.target);
                }
            });
        }, observerOptions);
        
        // Observe elements with animation classes
        document.querySelectorAll('.need-card, .alert-item, .hero, .section-title').forEach(el => {
            observer.observe(el);
        });
    }
}

// Accessibility Features
function initAccessibilityFeatures() {
    // Ensure all interactive elements have proper focus management
    document.querySelectorAll('button, a, input, select, textarea').forEach(element => {
        if (!element.hasAttribute('tabindex') && element.getAttribute('tabindex') !== '-1') {
            element.setAttribute('tabindex', '0');
        }
    });
    
    // Add keyboard navigation support for carousel
    document.querySelectorAll('.carousel').forEach(carousel => {
        carousel.addEventListener('keydown', function(e) {
            if (e.key === 'ArrowLeft') {
                // Previous slide
                e.preventDefault();
                const carouselContainer = carousel.closest('.carousel-container');
                if (carouselContainer) {
                    const prevBtn = carouselContainer.querySelector('.carousel-prev');
                    if (prevBtn) prevBtn.click();
                }
            } else if (e.key === 'ArrowRight') {
                // Next slide
                e.preventDefault();
                const carouselContainer = carousel.closest('.carousel-container');
                if (carouselContainer) {
                    const nextBtn = carouselContainer.querySelector('.carousel-next');
                    if (nextBtn) nextBtn.click();
                }
            }
        });
    });
}

// Toast Notification System
function showToast(message, type = 'info') {
    // Remove any existing toasts
    const existingToast = document.querySelector('.toast-notification');
    if (existingToast) {
        existingToast.remove();
    }
    
    // Create toast element
    const toast = document.createElement('div');
    toast.className = `toast-notification toast-${type} glass-effect`;
    toast.setAttribute('role', 'alert');
    toast.setAttribute('aria-live', 'polite');
    
    toast.innerHTML = `
        <div class="toast-content">
            <span class="toast-message">${message}</span>
            <button class="toast-close" aria-label="Close notification">&times;</button>
        </div>
    `;
    
    // Add to document
    document.body.appendChild(toast);
    
    // Auto hide after 5 seconds
    setTimeout(() => {
        if (toast.parentNode) {
            toast.classList.add('toast-hidden');
            setTimeout(() => {
                if (toast.parentNode) {
                    toast.remove();
                }
            }, 300);
        }
    }, 5000);
    
    // Close button handler
    toast.querySelector('.toast-close').addEventListener('click', function() {
        toast.classList.add('toast-hidden');
        setTimeout(() => {
            if (toast.parentNode) {
                toast.remove();
            }
        }, 300);
    });
}

// Form Validation Helper
function validateForm(form) {
    let isValid = true;
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
        } else {
            field.classList.remove('error');
            // Remove existing error message
            const existingError = field.parentNode.querySelector('.field-error');
            if (existingError) {
                existingError.remove();
            }
        }
    });
    
    return isValid;
}

// Utility function to get URL parameters
function getUrlParameter(name) {
    name = name.replace(/[\[]/, '\\[').replace(/[\]]/, '\\]');
    const regex = new RegExp('[\\?&]' + name + '=([^&#]*)');
    const results = regex.exec(window.location.search);
    return results === null ? '' : decodeURIComponent(results[1].replace(/\+/g, ' '));
}

// Utility function to format dates
function formatDate(dateString) {
    const options = { year: 'numeric', month: 'short', day: 'numeric' };
    return new Date(dateString).toLocaleDateString(undefined, options);
}

// Carousel functionality
function initCarousel(carouselElement) {
    const slides = carouselElement.querySelectorAll('.carousel-slide');
    const dotsContainer = carouselElement.querySelector('.carousel-dots');
    const prevBtn = carouselElement.querySelector('.carousel-prev');
    const nextBtn = carouselElement.querySelector('.carousel-next');
    
    let currentIndex = 0;
    let interval;
    
    // Create dots
    slides.forEach((_, index) => {
        const dot = document.createElement('div');
        dot.classList.add('carousel-dot');
        if (index === 0) dot.classList.add('active');
        dot.addEventListener('click', () => goToSlide(index));
        dotsContainer.appendChild(dot);
    });
    
    const dots = carouselElement.querySelectorAll('.carousel-dot');
    
    // Navigation functions
    function goToSlide(index) {
        slides[currentIndex].classList.remove('active');
        dots[currentIndex].classList.remove('active');
        
        currentIndex = index;
        
        slides[currentIndex].classList.add('active');
        dots[currentIndex].classList.add('active');
        
        // For slide transition
        const slidesContainer = carouselElement.querySelector('.carousel-slides');
        if (!carouselElement.classList.contains('fade')) {
            slidesContainer.style.transform = `translateX(-${currentIndex * 100}%)`;
        }
    }
    
    function nextSlide() {
        const nextIndex = (currentIndex + 1) % slides.length;
        goToSlide(nextIndex);
    }
    
    function prevSlide() {
        const prevIndex = (currentIndex - 1 + slides.length) % slides.length;
        goToSlide(prevIndex);
    }
    
    // Event listeners
    if (prevBtn) prevBtn.addEventListener('click', prevSlide);
    if (nextBtn) nextBtn.addEventListener('click', nextSlide);
    
    // Keyboard navigation
    carouselElement.addEventListener('keydown', (e) => {
        if (e.key === 'ArrowLeft') {
            prevSlide();
        } else if (e.key === 'ArrowRight') {
            nextSlide();
        }
    });
    
    // Auto-play
    function startAutoPlay() {
        interval = setInterval(nextSlide, 5000);
    }
    
    function stopAutoPlay() {
        clearInterval(interval);
    }
    
    // Pause on hover
    carouselElement.addEventListener('mouseenter', stopAutoPlay);
    carouselElement.addEventListener('mouseleave', startAutoPlay);
    
    // Start auto-play
    startAutoPlay();
    
    return {
        goToSlide,
        nextSlide,
        prevSlide
    };
}

// Initialize all carousels
function initCarousels() {
    document.querySelectorAll('.carousel-container').forEach(carousel => {
        initCarousel(carousel);
    });
}

// Export functions for use in other modules
window.DaaamUlHayat = {
    showToast,
    validateForm,
    getUrlParameter,
        // Page is visible
        // Refresh data if needed
    }
});