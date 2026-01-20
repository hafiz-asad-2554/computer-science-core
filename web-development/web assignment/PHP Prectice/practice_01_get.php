<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Practice 01 - GET Method</title>
    <style>
        body { font-family: Arial, sans-serif; margin: 20px; }
        .container { max-width: 600px; margin: auto; padding: 20px; border: 1px solid #ddd; border-radius: 8px; }
        input, select { padding: 8px; margin: 5px 0; width: 100%; box-sizing: border-box; }
        input[type="submit"] { background-color: #4CAF50; color: white; border: none; cursor: pointer; }
        input[type="submit"]:hover { background-color: #45a049; }
        .result { margin-top: 20px; padding: 10px; background-color: #f9f9f9; border-left: 4px solid #2196F3; }
    </style>
</head>
<body>

<div class="container">
    <h2>Practice 01: The GET Method</h2>
    <p>Data sent via GET is visible in the URL.</p>

    <form method="get" action="">
        <label for="username">Username:</label>
        <input type="text" id="username" name="username" placeholder="Enter your name" required>

        <label for="age">Age:</label>
        <input type="number" id="age" name="age" placeholder="Enter your age" required>

        <input type="submit" value="Submit via GET">
    </form>

    <?php
    if (isset($_GET['username']) && isset($_GET['age'])) {
        $user = htmlspecialchars($_GET['username']); // Always sanitize output
        $age = htmlspecialchars($_GET['age']);

        echo "<div class='result'>";
        echo "<h3>Submission Received:</h3>";
        echo "Your name is <strong>$user</strong> and you are <strong>$age</strong> years old.<br>";
        echo "<small>Check the URL bar to see these values!</small>";
        echo "</div>";
    }
    ?>
</div>

</body>
</html>
