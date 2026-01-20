<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Registration Success</title>
    <style>
        body { font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; background-color: #f4f4f9; display: flex; justify-content: center; align-items: center; height: 100vh; margin: 0; }
        .container { background: white; padding: 2rem; border-radius: 8px; box-shadow: 0 4px 6px rgba(0,0,0,0.1); width: 100%; max-width: 400px; text-align: center; }
        h2 { color: #28a745; margin-bottom: 1.5rem; }
        .data-item { margin-bottom: 1rem; text-align: left; padding: 10px; background: #f8f9fa; border-radius: 4px; }
        .data-label { font-weight: bold; color: #555; }
        .data-value { color: #333; word-break: break-all; }
        .back-link { display: inline-block; margin-top: 1.5rem; color: #007bff; text-decoration: none; }
        .back-link:hover { text-decoration: underline; }
    </style>
</head>
<body>
    <div class="container">
        <h2>Registration Data Received</h2>
        <?php
        // Check if data is set
        if (isset($_GET['fullname']) && isset($_GET['username']) && isset($_GET['email']) && isset($_GET['password'])) {
            // Sanitize inputs
            $fullname = htmlspecialchars(trim($_GET['fullname']));
            $username = htmlspecialchars(trim($_GET['username']));
            $email = htmlspecialchars(trim($_GET['email']));
            $password = htmlspecialchars(trim($_GET['password']));
            
            // Display values
            echo '<div class="data-item"><span class="data-label">Full Name:</span> <span class="data-value">' . $fullname . '</span></div>';
            echo '<div class="data-item"><span class="data-label">Username:</span> <span class="data-value">' . $username . '</span></div>';
            echo '<div class="data-item"><span class="data-label">Email:</span> <span class="data-value">' . $email . '</span></div>';
            echo '<div class="data-item"><span class="data-label">Password:</span> <span class="data-value">' . $password . '</span></div>';
        } else {
            echo '<p style="color:red;">No data submitted.</p>';
        }
        ?>
        <a href="register.html" class="back-link">Back to Register</a>
    </div>
</body>
</html>
