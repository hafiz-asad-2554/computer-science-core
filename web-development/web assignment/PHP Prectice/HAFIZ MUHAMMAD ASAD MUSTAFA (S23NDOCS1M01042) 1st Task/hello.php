<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP Hello World</title>
    <style>
        /* Task 3.3: Add HTML markup... (CSS Styling) */
        body {
            font-family: Arial, sans-serif;
            background-color: #f4f4f4;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            flex-direction: column;
        }
        .container {
            padding: 20px;
            background-color: #fff;
            border-radius: 8px;
            box-shadow: 0 2px 5px rgba(0,0,0,0.1);
            text-align: center;
        }
        .hello {
            color: #007BFF; /* Blue color */
            font-size: 24px;
        }
        .personal {
            color: #28a745; /* Green color */
            font-size: 18px;
            margin-top: 15px;
        }
    </style>
</head>
<body>
    <div class="container">
        <div class="hello">
            <?php
                echo "Hello, World!";
                echo "<br>";
                echo "The current date and time is: " . date("Y-m-d H:i:s");
            ?>
        </div>

        <div class="personal">
            <?php
                echo "Hello, this is me; hafiz muhammad asad mustafa  (S23NDOCS1MO1042!";
            ?>
        </div>
    </div>
</body>
</html>