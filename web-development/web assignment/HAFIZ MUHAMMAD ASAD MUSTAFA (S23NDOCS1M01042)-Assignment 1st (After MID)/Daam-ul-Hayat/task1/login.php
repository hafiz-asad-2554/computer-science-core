<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login Process - Da'am-ul-Hayat</title>
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
        <h1>Login Data Received</h1>
        
        <?php
        // Sanitize and print login data
        $email = isset($_GET['email']) ? htmlspecialchars(trim($_GET['email'])) : '';
        $password = isset($_GET['password']) ? htmlspecialchars(trim($_GET['password'])) : '';
        $remember = isset($_GET['remember']) ? htmlspecialchars(trim($_GET['remember'])) : '';
        
        echo "<table class='data-table'>";
        echo "<tr><th>Field</th><th>Value</th></tr>";
        echo "<tr><td>Email</td><td>" . $email . "</td></tr>";
        echo "<tr><td>Password</td><td>" . $password . "</td></tr>";
        echo "<tr><td>Remember Me</td><td>" . $remember . "</td></tr>";
        echo "</table>";
        ?>
        
        <a href="login.html" class="back-link">Back to Login</a>
    </div>
</body>
</html>