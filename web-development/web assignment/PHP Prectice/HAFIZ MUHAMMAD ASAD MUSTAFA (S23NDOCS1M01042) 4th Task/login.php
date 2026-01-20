<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Simple Login System</title>
    <style>
        body { font-family: Arial, sans-serif; background-color: #f4f7f9; padding: 40px; }
        .container { max-width: 400px; margin: 0 auto; background-color: #ffffff; padding: 30px; border-radius: 10px; box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1); }
        h1 { text-align: center; color: #333; }
        label { display: block; margin-bottom: 5px; font-weight: bold; color: #555; }
        input[type="text"], input[type="password"] { width: 100%; padding: 10px; margin-bottom: 15px; border: 1px solid #ccc; border-radius: 5px; box-sizing: border-box; }
        input[type="submit"] { width: 100%; padding: 10px; background-color: #007bff; color: white; border: none; border-radius: 5px; cursor: pointer; font-size: 16px; transition: background-color 0.3s; }
        input[type="submit"]:hover { background-color: #0056b3; }

        /* Styling for Success and Error Messages */
        .message-box { padding: 15px; border-radius: 5px; margin-top: 20px; font-weight: bold; text-align: center; }
        .success { background-color: #d4edda; color: #155724; border: 1px solid #c3e6cb; }
        .error { background-color: #f8d7da; color: #721c24; border: 1px solid #f5c6cb; }
    </style>
</head>
<body>

    <div class="container">
        <h1>Login</h1>

        <?php
            // 1. Predefined username and password stored in an associative array
            $users = array(
                "admin" => "password123",
                "user1" => "securepass",
                "guest" => "welcome"
            );

            $message = ""; // Variable to hold the result message
            $message_class = ""; // Variable to hold the result message style

            // Check if the form was submitted
            if ($_SERVER["REQUEST_METHOD"] == "POST") {
                
                // Use the null coalescing operator (??) to safely get input, defaulting to empty string
                $username = $_POST['username'] ?? '';
                $password = $_POST['password'] ?? '';

                // --- 2. Check if both fields are filled (not empty) ---
                if (empty($username) || empty($password)) {
                    $message = "🚫 Both username and password fields must be filled.";
                    $message_class = "error";

                // --- 3. Check if username exists in the predefined array ---
                } elseif (!array_key_exists($username, $users)) {
                    $message = "❌ Error: Username **$username** does not exist.";
                    $message_class = "error";

                // --- 4. Check if password matches the stored password ---
                } elseif ($users[$username] === $password) {
                    $message = "✅ Success! Welcome, **$username**! You are now logged in.";
                    $message_class = "success";
                
                // Password did not match
                } else {
                    $message = "⚠️ Error: Invalid password for username **$username**.";
                    $message_class = "error";
                }
            }

            // Display the result message if it exists
            if (!empty($message)) {
                echo "<div class='message-box $message_class'>$message</div>";
            }
        ?>

        <form method="POST" action="">
            <label for="username">Username:</label>
            <input type="text" id="username" name="username" required>

            <label for="password">Password:</label>
            <input type="password" id="password" name="password" required>

            <input type="submit" value="Log In">
        </form>

    </div>

</body>
</html>