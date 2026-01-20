<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Practice 02 - POST Method</title>
    <style>
        body { font-family: Arial, sans-serif; margin: 20px; }
        .container { max-width: 600px; margin: auto; padding: 20px; border: 1px solid #ddd; border-radius: 8px; }
        input, select { padding: 8px; margin: 5px 0; width: 100%; box-sizing: border-box; }
        input[type="submit"] { background-color: #f44336; color: white; border: none; cursor: pointer; }
        input[type="submit"]:hover { background-color: #d32f2f; }
        .result { margin-top: 20px; padding: 10px; background-color: #f9f9f9; border-left: 4px solid #f44336; }
    </style>
</head>
<body>

<div class="container">
    <h2>Practice 02: The POST Method</h2>
    <p>Data sent via POST is <strong>not</strong> visible in the URL. Ideal for sensitive info like passwords.</p>

    <form method="post" action="">
        <label for="email">Email:</label>
        <input type="email" id="email" name="email" placeholder="enter@email.com" required>

        <label for="password">Password:</label>
        <input type="password" id="password" name="password" placeholder="Has hidden input" required>

        <input type="submit" value="Login (POST)">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        // Collect value of input field
        $email = htmlspecialchars($_POST['email']);
        $password = htmlspecialchars($_POST['password']); 

        echo "<div class='result'>";
        echo "<h3>Form Submitted Successfully!</h3>";
        echo "Email received: <strong>$email</strong><br>";
        echo "Password received: <strong>$password</strong> (In a real app, hash this!)<br>";
        echo "<small>Check the URL bar - clean!</small>";
        echo "</div>";
    }
    ?>
</div>

</body>
</html>
