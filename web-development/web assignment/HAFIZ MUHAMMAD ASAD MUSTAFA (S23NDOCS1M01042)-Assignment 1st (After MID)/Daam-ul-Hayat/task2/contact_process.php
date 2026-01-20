<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Contact Process - Da'am-ul-Hayat</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            max-width: 800px;
            margin: 0 auto;
            padding: 20px;
            background-color: #f5f5f5;
        }
        .container {
            background-color: white;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 2px 10px rgba(0,0,0,0.1);
        }
        h1 {
            color: #333;
            text-align: center;
        }
        .data-table {
            width: 100%;
            border-collapse: collapse;
            margin: 20px 0;
        }
        .data-table th, .data-table td {
            border: 1px solid #ddd;
            padding: 12px;
            text-align: left;
        }
        .data-table th {
            background-color: #f2f2f2;
        }
        .back-link {
            display: inline-block;
            margin-top: 20px;
            padding: 10px 20px;
            background-color: #007bff;
            color: white;
            text-decoration: none;
            border-radius: 4px;
        }
        .back-link:hover {
            background-color: #0056b3;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Contact Data Received</h1>
        
        <?php
        // Validate and display contact form data
        $name = isset($_POST['name']) ? htmlspecialchars(trim($_POST['name'])) : '';
        $email = isset($_POST['email']) ? htmlspecialchars(trim($_POST['email'])) : '';
        $subject = isset($_POST['subject']) ? htmlspecialchars(trim($_POST['subject'])) : '';
        $message = isset($_POST['message']) ? htmlspecialchars(trim($_POST['message'])) : '';
        
        // Server-side validation
        $errors = [];
        
        if (empty($name)) {
            $errors[] = "Name is required.";
        }
        
        if (empty($email)) {
            $errors[] = "Email is required.";
        } elseif (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
            $errors[] = "Invalid email format.";
        }
        
        if (empty($subject)) {
            $errors[] = "Subject is required.";
        }
        
        if (empty($message)) {
            $errors[] = "Message is required.";
        }
        
        // Display errors or data
        if (!empty($errors)) {
            echo "<div style='color: red; margin-bottom: 20px;'>";
            echo "<h2>Validation Errors:</h2>";
            echo "<ul>";
            foreach ($errors as $error) {
                echo "<li>" . $error . "</li>";
            }
            echo "</ul>";
            echo "</div>";
        } else {
            echo "<table class='data-table'>";
            echo "<tr><th>Field</th><th>Value</th></tr>";
            echo "<tr><td>Full Name</td><td>" . $name . "</td></tr>";
            echo "<tr><td>Email</td><td>" . $email . "</td></tr>";
            echo "<tr><td>Subject</td><td>" . $subject . "</td></tr>";
            echo "<tr><td>Message</td><td>" . nl2br($message) . "</td></tr>";
            echo "</table>";
        }
        ?>
        
        <a href="contact.html" class="back-link">Back to Contact</a>
    </div>
</body>
</html>