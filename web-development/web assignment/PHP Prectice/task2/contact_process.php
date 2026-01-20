<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Message Sent</title>
    <style>
        body { font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; background-color: #f4f4f9; display: flex; justify-content: center; align-items: center; min-height: 100vh; margin: 0; padding: 20px; box-sizing: border-box; }
        .container { background: white; padding: 2rem; border-radius: 8px; box-shadow: 0 4px 6px rgba(0,0,0,0.1); width: 100%; max-width: 600px; }
        h2 { text-align: center; color: #28a745; margin-bottom: 1.5rem; }
        table { width: 100%; border-collapse: collapse; margin-top: 1rem; }
        th, td { padding: 12px; text-align: left; border-bottom: 1px solid #ddd; }
        th { background-color: #f8f9fa; color: #555; width: 30%; }
        td { color: #333; word-break: break-all; }
        .error-box { background-color: #f8d7da; color: #721c24; padding: 1rem; border-radius: 4px; margin-bottom: 1rem; border: 1px solid #f5c6cb; }
        .back-link { display: block; text-align: center; margin-top: 1.5rem; color: #007bff; text-decoration: none; }
        .back-link:hover { text-decoration: underline; }
    </style>
</head>
<body>
    <div class="container">
        <?php
        $errors = [];
        $fullname = $email = $subject = $message = "";

        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            // Validate Full Name
            if (empty($_POST["fullname"])) {
                $errors[] = "Full Name is required.";
            } else {
                $fullname = htmlspecialchars(trim($_POST["fullname"]));
            }

            // Validate Email
            if (empty($_POST["email"])) {
                $errors[] = "Email is required.";
            } else {
                $email = htmlspecialchars(trim($_POST["email"]));
                if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
                    $errors[] = "Invalid email format.";
                }
            }

            // Validate Subject
            if (empty($_POST["subject"])) {
                $errors[] = "Subject is required.";
            } else {
                $subject = htmlspecialchars(trim($_POST["subject"]));
            }

            // Validate Message
            if (empty($_POST["message"])) {
                $errors[] = "Message is required.";
            } else {
                $message = htmlspecialchars(trim($_POST["message"]));
                if (strlen($message) < 10) {
                    $errors[] = "Message must be at least 10 characters long.";
                }
            }

            if (empty($errors)) {
                echo "<h2>Message Sent Successfully</h2>";
                echo "<table>";
                echo "<tr><th>Field</th><th>Value</th></tr>";
                echo "<tr><td>Full Name</td><td>$fullname</td></tr>";
                echo "<tr><td>Email</td><td>$email</td></tr>";
                echo "<tr><td>Subject</td><td>$subject</td></tr>";
                echo "<tr><td>Message</td><td>$message</td></tr>";
                echo "</table>";
            } else {
                echo "<h2>Error Sending Message</h2>";
                echo "<div class='error-box'>";
                foreach ($errors as $error) {
                    echo "<p>• $error</p>";
                }
                echo "</div>";
            }
        } else {
            echo "<h2>Invalid Request</h2>";
            echo "<p>Please submit the form.</p>";
        }
        ?>
        <a href="contact.html" class="back-link">Back to Contact Form</a>
    </div>
</body>
</html>
