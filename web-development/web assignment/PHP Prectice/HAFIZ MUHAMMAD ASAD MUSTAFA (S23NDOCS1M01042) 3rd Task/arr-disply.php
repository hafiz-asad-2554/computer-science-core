<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Array Display</title>
    <style>
        table, th, td {
            border: 1px solid black;
            border-collapse: collapse;
            padding: 8px;
            text-align: left;
        }
    </style>
</head>
<body>

    <h1>1. Indexed Array of Fruits (Unordered List)</h1>

    <?php
        $fruits = array(
            "Apple", "Banana", "Cherry", "Date", "Elderberry",
            "Fig", "Grape", "Honeydew", "Kiwi", "Lemon"
        );

        echo "<ul>";
        foreach ($fruits as $fruit) {
            echo "<li>$fruit</li>";
        }
        echo "</ul>";
    ?>

    <hr>

    <h1>2. Associative Array of Countries and Capitals (HTML Table)</h1>

    <?php
        $countries_capitals = array(
            "France" => "Paris",
            "Germany" => "Berlin",
            "Japan" => "Tokyo",
            "Brazil" => "Brasília",
            "Canada" => "Ottawa"
        );

        echo "<table>";
        echo "<thead><tr><th>Country</th><th>Capital</th></tr></thead>";
        echo "<tbody>";

        foreach ($countries_capitals as $country => $capital) {
            echo "<tr>";
            echo "<td>$country</td>";
            echo "<td>$capital</td>";
            echo "</tr>";
        }

        echo "</tbody>";
        echo "</table>";
    ?>

</body>
</html>