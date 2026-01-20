// JS for register page

document.addEventListener("DOMContentLoaded", () => {
  const form = document.querySelector(".form-box");

  form.addEventListener("submit", function (e) {
    e.preventDefault(); // prevent form from submitting

    // Get form field values
    const fullName = form.querySelector('input[type="text"]').value.trim();
    const userType = form.querySelector("select").value;
    const email = form.querySelector('input[type="email"]').value.trim();
    const password = form.querySelectorAll('input[type="password"]')[0].value;
    const confirmPassword = form.querySelectorAll('input[type="password"]')[1].value;

    // Remove old error messages
    document.querySelectorAll(".error").forEach(el => el.remove());

    let valid = true;

    // Helper function to show error messages
    const showError = (element, message) => {
      const error = document.createElement("small");
      error.classList.add("error");
      error.style.color = "red";
      error.textContent = message;
      element.insertAdjacentElement("afterend", error);
      valid = false;
    };

    // Full name validation (minimum 3 chars, alphanumeric + spaces)
    if (fullName.length < 3 || !/^[a-zA-Z0-9 ]+$/.test(fullName)) {
      showError(form.querySelector('input[type="text"]'), "Name must be at least 3 characters and alphanumeric.");
    }

    // Email validation using regex
    const emailPattern = /^[^ ]+@[^ ]+\.[a-z]{2,3}$/;
    if (!emailPattern.test(email)) {
      showError(form.querySelector('input[type="email"]'), "Please enter a valid email address.");
    }

    // Password validation (min 8 chars, upper, lower, number)
    const passPattern = /^(?=.*[a-z])(?=.*[A-Z])(?=.*\d).{8,}$/;
    if (!passPattern.test(password)) {
      showError(form.querySelectorAll('input[type="password"]')[0],
        "Password must be 8+ characters and include uppercase, lowercase, and number.");
    }

    // Confirm password match
    if (password !== confirmPassword) {
      showError(form.querySelectorAll('input[type="password"]')[1], "Passwords do not match.");
    }

    // If everything is valid ; wo to bad my he pta chaly ga
    if (valid) {
      alert("Registration successful!");
      form.reset();
    }
  });
});
