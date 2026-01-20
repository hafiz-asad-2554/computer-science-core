<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Practice 06 - Server Info</title>
    <style>
        body { font-family: "Courier New", Courier, monospace; margin: 20px; }
        table { width: 100%; border-collapse: collapse; }
        th, td { border: 1px solid #ddd; padding: 8px; text-align: left; }
        th { background-color: #f2f2f2; }
        .container { max-width: 800px; margin: auto; }
    </style>
</head>
<body>

<div class="container">
    <h2>Practice 06: Server & Request Info</h2>
    <p>This page displays information about the server environment using the <code>$_SERVER</code> superglobal.</p>

    <table>
        <tr>
            <th>Key</th>
            <th>Value</th>
        </tr>
        <?php
        $keys_to_show = [
            'PHP_SELF',
            'SERVER_NAME',
            'HTTP_HOST',
            'HTTP_USER_AGENT',
            'SCRIPT_NAME',
            'REQUEST_METHOD',
            'REMOTE_ADDR'
        ];

        foreach ($keys_to_show as $key) {
            $value = isset($_SERVER[$key]) ? $_SERVER[$key] : "<em>Not Available</em>";
            echo "<tr>";
            echo "<td>" . $key . "</td>";
            echo "<td>" . htmlspecialchars($value) . "</td>";
            echo "</tr>";
        }
        ?>
    </table>
</div>

</body>
</html>
