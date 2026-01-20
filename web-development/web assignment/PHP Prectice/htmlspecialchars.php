<!DOCTYPE html>
<html>

<head>
    <title>htmlspecialchars() Demo</title>
    <meta charset="UTF-8">
</head>

<body>

    <h2>Enter something (try HTML or JavaScript!)</h2>

    <form method="get">
        <input type="text" name="text" style="width:300px;" placeholder='Try typing: <script>alert("XSS")</script>'>
        <button type="submit">Submit</button>
    </form>

    <?php
if (!empty($_GET['text'])) {

    $input = $_GET['text'];
    $safe  = htmlspecialchars($input, ENT_QUOTES, 'UTF-8');

    echo "<h3>1️⃣ Without htmlspecialchars() — DANGEROUS:</h3>";
    echo "<div style='padding:10px;border:1px solid red;'>$input</div>";

    echo "<h3>2️⃣ With htmlspecialchars() — SAFE:</h3>";
    echo "<div style='padding:10px;border:1px solid green;'>$safe</div>";
}
?>

</body>

</html>