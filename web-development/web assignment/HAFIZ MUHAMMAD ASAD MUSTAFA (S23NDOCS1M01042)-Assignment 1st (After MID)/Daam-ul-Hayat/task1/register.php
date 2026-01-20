<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Registration Process - Da'am-ul-Hayat</title>
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
        <h1>Registration Data Received</h1>
        
        <?php
        // Sanitize and print registration data
        $fullName = isset($_GET['fullName']) ? htmlspecialchars(trim($_GET['fullName'])) : '';
        $email = isset($_GET['email']) ? htmlspecialchars(trim($_GET['email'])) : '';
        $role = isset($_GET['role']) ? htmlspecialchars(trim($_GET['role'])) : '';
        $password = isset($_GET['password']) ? htmlspecialchars(trim($_GET['password'])) : '';
        $confirmPassword = isset($_GET['confirmPassword']) ? htmlspecialchars(trim($_GET['confirmPassword'])) : '';
        $terms = isset($_GET['terms']) ? htmlspecialchars(trim($_GET['terms'])) : '';
        $newsletter = isset($_GET['newsletter']) ? htmlspecialchars(trim($_GET['newsletter'])) : '';
        
        echo "<table class='data-table'>";
        echo "<tr><th>Field</th><th>Value</th></tr>";
        echo "<tr><td>Full Name</td><td>" . $fullName . "</td></tr>";
        echo "<tr><td>Email</td><td>" . $email . "</td></tr>";
        echo "<tr><td>Role</td><td>" . $role . "</td></tr>";
        echo "<tr><td>Password</td><td>" . $password . "</td></tr>";
        echo "<tr><td>Confirm Password</td><td>" . $confirmPassword . "</td></tr>";
        echo "<tr><td>Terms Agreement</td><td>" . $terms . "</td></tr>";
        echo "<tr><td>Newsletter Subscription</td><td>" . $newsletter . "</td></tr>";
        echo "</table>";
        ?>
        
        <a href="register.html" class="back-link">Back to Registration</a>
    </div>
</body>
</html>