<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP Variable Types and Arrays</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            background-color: #f4f7f6;
            color: #333;
            line-height: 1.6;
            margin: 0;
            padding: 20px;
        }
        .container {
            max-width: 100%px;
            margin: 40px auto;
            background-color: #ffffff;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 6px 15px rgba(0, 0, 0, 0.1);
        }
        h1 {
            color: #007bff;
            border-bottom: 3px solid #007bff;
            padding-bottom: 10px;
            margin-bottom: 25px;
            text-align: center;
        }
        h2 {
            color: #495057;
            margin-top: 30px;
            border-left: 5px solid #28a745;
            padding-left: 10px;
        }
        pre {
            background-color: #e9ecef;
            padding: 15px;
            border-radius: 8px;
            overflow-x: auto;
            font-family: 'Consolas', 'Courier New', monospace;
            white-space: pre-wrap;
            word-wrap: break-word;
        }
        .note {
            background-color: #fff3cd;
            color: #856404;
            padding: 15px;
            border-radius: 5px;
            border-left: 5px solid #ffc107;
            margin-top: 15px;
        }
    </style>
</head>
<body>

<div class="container">
    <h1>📚 PHP Variable Declaration and Types</h1>
    
    <h2>1. Basic Variable Types Demonstration</h2>
    <p>Using <code>var_dump()</code> to display the **value** and **data type** of each variable:</p>
    <pre>
        <?php
            //Declare variables of different types
            $name = "HAFIZ MUHAMMAD ASAD MUSTAFA";  // String
            $age = 25;             // Integer
            $price = 19.99;        // Float
            $isStudent = true;     // Boolean
            $emptyValue = NULL;    // NULL

            var_dump($name);
            var_dump($age);
            var_dump($price);
            var_dump($isStudent);
            var_dump($emptyValue);
        ?>
    </pre>

    <hr>
    
    <h2>2. Type Juggling Observation (Loosely Typed)</h2>
    <p>We assign a **string** to a variable that was initially an **integer** to see how PHP handles the change.</p>
    <pre>
        <?php
            $initialValue = 100; // int
            echo "Initial Type: ";
            var_dump($initialValue);

            // Reassigning a string
            $initialValue = "One Hundred"; // string
            echo "New Type After Reassignment: ";
            var_dump($initialValue);
        ?>
    </pre>
    <div class="note">
        <strong>Observation:</strong> PHP automatically converts the variable's type from **integer** to **string** without any error. This demonstrates that PHP is a **loosely typed** language.
    </div>

    <hr>

    <h2>3. Indexed and Associative Arrays (5 Elements Each)</h2>
    
    <h3>Indexed Array (Fruits)</h3>
    <pre>
        <?php
            // Indexed Array ( 0, 1, 2, 3, 4)
            $fruits = array("Apple", "Banana", "Cherry", "Date", "melberry");
            var_dump($fruits);
        ?>
    </pre>

    <h3>Associative Array (User Profile)</h3>
    <pre>
        <?php
            // Associative Array ( 'name', 'age', etc.)
            $userProfile = [
                'name' => 'Fahad',
                'age' => 30,
                'city' => 'Karachi',
                'occupation' => 'Developer',
                'active' => true 
            ];
            var_dump($userProfile);
        ?>
    </pre>
</div>

</body>
</html>