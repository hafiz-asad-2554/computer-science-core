<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <title>GET Form Example</title>
</head>

<body>

    <h2>Search Form (GET Method)</h2>

    <!-- GET Form -->
    <form method="get" action="">
        Search Query:
        <input type="text" name="query" required><br><br>

        Category:
        <select name="category">
            <option value="electronics">Electronics</option>
            <option value="books">Books</option>
            <option value="clothing">Clothing</option>
        </select><br><br>

        <input type="submit" value="Search (GET)">
    </form>

    <hr>

    <?php
    // Only run after form is submitted
    if ($_SERVER["REQUEST_METHOD"] === "GET" && isset($_GET["query"])) {

        // Get submitted data safely
        $query = $_GET['query'];
        $category = $_GET['category'];

        // Safe output using htmlspecialchars()
        echo "<h3>Search Results:</h3>";
        echo "Query: " . htmlspecialchars($query, ENT_QUOTES, 'UTF-8') . "<br>";
        echo "Category: " . htmlspecialchars($category, ENT_QUOTES, 'UTF-8') . "<br>";
    } else {
        echo "Submit the GET form above.";
    }
    ?>

</body>

</html>