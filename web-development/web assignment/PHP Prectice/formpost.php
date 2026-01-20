<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <title>POST Form Example</title>
</head>

<body>

    <h2>POST Method Form</h2>

    <form method="post" action="">
        Search Query:
        <input type="text" name="query" required><br><br>

        Category:
        <select name="category">
            <option value="electronics">Electronics</option>
            <option value="books">Books</option>
            <option value="clothing">Clothing</option>
        </select><br><br>

        <input type="submit" value="Search (POST)">
    </form>

    <hr>

    <?php
    // Run only after POST form is submitted
    if ($_SERVER["REQUEST_METHOD"] === "POST" && isset($_POST["query"])) {

        // Get the values from the form
        $query = $_POST['query'];
        $category = $_POST['category'];

        // Secure output
        echo "Query: " . htmlspecialchars($query, ENT_QUOTES, 'UTF-8') . "<br>";
        echo "Category: " . htmlspecialchars($category, ENT_QUOTES, 'UTF-8');
    } else {
        echo "Submit the POST form above.";
    }
    ?>

</body>

</html>