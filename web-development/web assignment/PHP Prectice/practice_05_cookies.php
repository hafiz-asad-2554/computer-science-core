<?php
// Cookies must be set before any HTML output
$theme = "light"; // Default
if (isset($_COOKIE['theme'])) {
    $theme = $_COOKIE['theme'];
}

// Handle form submission to set cookie
if (isset($_POST['theme_selection'])) {
    $selected_theme = $_POST['theme_selection'];
    // Set cookie for 1 hour (3600 seconds)
    setcookie("theme", $selected_theme, time() + 3600, "/"); 
    // Reload page to apply
    header("Location: " . $_SERVER['PHP_SELF']);
    exit;
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Practice 05 - Cookies</title>
    <style>
        body.light { background-color: #ffffff; color: #000000; }
        body.dark { background-color: #333333; color: #ffffff; }
        .container { max-width: 600px; margin: 20px auto; padding: 20px; border: 1px solid #777; border-radius: 8px; }
        button { padding: 8px 15px; cursor: pointer; }
    </style>
</head>
<body class="<?php echo htmlspecialchars($theme); ?>">

<div class="container">
    <h2>Practice 05: Cookies</h2>
    <p>Current Theme Preference: <strong><?php echo ucfirst($theme); ?></strong></p>
    <p>Select a theme. This preference will be saved on your computer.</p>

    <form method="post">
        <button type="submit" name="theme_selection" value="light">Light Mode</button>
        <button type="submit" name="theme_selection" value="dark">Dark Mode</button>
    </form>

    <p><small>Note: Cookies are stored in your browser.</small></p>
</div>

</body>
</html>
