<?php
// Start the session at the very top!
session_start();
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Practice 04 - Sessions</title>
    <style>
        body { font-family: Arial, sans-serif; margin: 20px; }
        .container { max-width: 600px; margin: auto; padding: 20px; border: 1px solid #ddd; border-radius: 8px; }
        .status { padding: 10px; background-color: #e8f5e9; border: 1px solid #4CAF50; margin-bottom: 20px; }
    </style>
</head>
<body>

<div class="container">
    <h2>Practice 04: Sessions (Synchronization)</h2>
    <p>Sessions store data across different pages. Reload this page to see the counter increase!</p>

    <?php
    // Initialize or Increment Counter
    if (!isset($_SESSION['page_views'])) {
        $_SESSION['page_views'] = 1;
        echo "<div class='status'>Welcome! This is your first visit within this session.</div>";
    } else {
        $_SESSION['page_views']++;
        echo "<div class='status'>You have visited this page <strong>" . $_SESSION['page_views'] . "</strong> times in this session.</div>";
    }
    ?>

    <form method="post">
        <input type="submit" name="reset" value="Reset Session" style="padding: 10px; background: #f44336; color: white; border: none; cursor: pointer;">
    </form>

    <?php
    if (isset($_POST['reset'])) {
        session_destroy();
        // Redirect to refresh and clear post data
        header("Location: " . $_SERVER['PHP_SELF']);
        exit;
    }
    ?>
</div>

</body>
</html>
