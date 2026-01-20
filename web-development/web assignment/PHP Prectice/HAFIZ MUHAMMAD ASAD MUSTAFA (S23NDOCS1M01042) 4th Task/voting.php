<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Voting Eligibility Check</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            padding: 20px;
            background-color: #f4f4f9;
            text-align: center;
        }
        .container {
            max-width: 400px;
            margin: 50px auto;
            padding: 20px;
            border: 1px solid #ccc;
            border-radius: 8px;
            background-color: #fff;
            box-shadow: 0 4px 8px rgba(0,0,0,0.1);
        }
        input[type="number"], input[type="submit"] {
            width: 100%;
            padding: 10px;
            margin: 8px 0;
            display: inline-block;
            border: 1px solid #ccc;
            border-radius: 4px;
            box-sizing: border-box;
        }
        input[type="submit"] {
            background-color: #4CAF50;
            color: white;
            cursor: pointer;
            font-size: 16px;
        }
        input[type="submit"]:hover {
            background-color: #45a049;
        }
        
        /* CSS for the result messages */
        .eligible {
            background-color: #d4edda;
            color: #155724;
            border: 1px solid #c3e6cb;
            padding: 15px;
            border-radius: 5px;
            margin-top: 20px;
        }
        .ineligible {
            background-color: #f8d7da;
            color: #721c24;
            border: 1px solid #f5c6cb;
            padding: 15px;
            border-radius: 5px;
            margin-top: 20px;
        }
    </style>
</head>
<body>

    <div class="container">
        <h2>Check Your Voting Status</h2>
        
        <form method="POST" action="">
            <label for="age">Enter your age:</label>
            <input type="number" id="age" name="age" min="1" required>
            <input type="submit" value="Check Eligibility">
        </form>

        <?php
            // Check if the form has been submitted and the 'age' variable exists
            if (isset($_POST['age'])) {
                // Take person age variable from the input
                $age = (int)$_POST['age'];

                echo "<h3>Result for Age: $age</h3>";
                
                // Simple if statement: check if over 18
                if ($age >= 18) {
                    // Display message and use CSS class for eligible
                    echo "<div class='eligible'>";
                    echo "🎉 **You are $age years old.** You are **eligible** to vote!";
                    echo "</div>";
                } else {
                    // Display message and use CSS class for ineligible
                    $years_needed = 18 - $age;
                    echo "<div class='ineligible'>";
                    echo "❌ **You are $age years old.** You are **not yet eligible** to vote. Please wait $years_needed more years.";
                    echo "</div>";
                }
            }
        ?>
    </div>

</body>
</html>