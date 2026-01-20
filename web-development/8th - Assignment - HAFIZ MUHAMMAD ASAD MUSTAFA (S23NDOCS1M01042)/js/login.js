// JS for login page

document.addEventListener("DOMContentLoaded", () => {
  const form = document.querySelector(".form-box");

  form.addEventListener("submit", function (e) {
    e.preventDefault();

    // Get field values
    const emailField = form.querySelector('input[type="email"]');
    const passwordField = form.querySelector('input[type="password"]');

    // Remove old error messages
    form.querySelectorAll(".error").forEach(err => err.remove());

    let valid = true;

    // Helper function to show errors
    const showError = (input, message) => {
      const error = document.createElement("small");
      error.classList.add("error");
      error.style.color = "red";
      error.textContent = message;
      input.insertAdjacentElement("afterend", error);
      valid = false;
    };

    // Email/Username field cannot be empty
    if (emailField.value.trim() === "") {
      showError(emailField, "Email field cannot be empty.");
    }

    // Password field cannot be empty
    if (passwordField.value.trim() === "") {
      showError(passwordField, "Password field cannot be empty.");
    }

    //  If all good
    if (valid) {
      alert("Login successful!");
      form.reset();
    }
  });
});
