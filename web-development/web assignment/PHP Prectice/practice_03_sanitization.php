<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Practice 03 - Sanitization</title>
    <style>
        body { font-family: Arial, sans-serif; margin: 20px; }
        .container { max-width: 600px; margin: auto; padding: 20px; border: 1px solid #ddd; border-radius: 8px; }
        input { padding: 8px; margin: 5px 0; width: 100%; box-sizing: border-box; }
        input[type="submit"] { background-color: #FF9800; color: white; border: none; cursor: pointer; }
        input[type="submit"]:hover { background-color: #fb8c00; }
        .box { margin-top: 15px; padding: 10px; border: 1px solid #ccc; background: #fff; }
        .danger { border-left: 4px solid red; }
        .safe { border-left: 4px solid green; }
    </style>
</head>
<body>

<div class="container">
    <h2>Practice 03: Input Sanitization</h2>
    <p>Try entering an HTML tag like <code>&lt;h1&gt;Hello&lt;/h1&gt;</code> or a script.</p>

    <form method="post" action="">
        <label for="comment">Comment:</label>
        <input type="text" id="comment" name="comment" placeholder="Type generic text or HTML..." required>
        <input type="submit" value="Submit Comment">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $raw_input = $_POST['comment'];
        
        // 1. UNSAFE OUTPUT (For demonstration only)
        echo "<div class='box danger'>";
        echo "<strong>Unsafe Output (Raw):</strong><br>";
        echo $raw_input; // This interacts with the browser as HTML!
        echo "</div>";

        // 2. SAFE OUTPUT (Sanitized)
        $safe_input = htmlspecialchars($raw_input, ENT_QUOTES, 'UTF-8');

        echo "<div class='box safe'>";
        echo "<strong>Safe Output (Sanitized):</strong><br>";
        echo $safe_input; // This is treated as plain text
        echo "</div>";
    }
    ?>
</div>

</body>
</html>
