<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP Math Operations</title>
    <style>
        /* Container width 100% as requested */
        body { 
            font-family: 'Verdana', sans-serif; 
            background-color: #e6f7ff; /* Light Blue Background */
            color: #1a1a1a; 
            margin: 0; 
            padding: 0;
        }
        .container { 
            width: 100%; /* REQUIRED: Container width 100% */
            padding: 30px; 
            background-color: #ffffff; 
            box-shadow: 0 0 15px rgba(0, 0, 0, 0.1);
        }
        h1 { 
            color: #004d99; /* Dark Blue Heading */
            border-bottom: 4px solid #004d99; 
            padding-bottom: 10px; 
            margin-bottom: 25px; 
            text-align: center;
        }
        h2 { 
            color: #009933; /* Green Subheading */
            margin-top: 35px;
            border-left: 5px solid #009933;
            padding-left: 10px;
        }
        pre { 
            background-color: #f0fff0; /* Very light green code block */
            padding: 15px; 
            border-radius: 6px; 
            overflow-x: auto;
        }
        .result { 
            font-weight: bold; 
            color: #cc0000; /* Red for results */
        }
    </style>
</head>
<body>

<div class="container">
    <h1>🔢 PHP Math Operations and Functions</h1>

    <?php
        // Task 4.2: Declare two integer variables
        $intA = 20;
        $intB = 7;
        
        // Task 4.3: Declare two float variables
        $floatX = 12.75;
        $floatY = 3.5;
    ?>
    
    <h2>1. Integer Arithmetic Operations (Task 2)</h2>
    <p>Variables: $intA = <?php echo $intA; ?>, $intB = <?php echo $intB; ?></p>
    <pre>
        <?php
            echo "Addition (A + B):      " . $intA + $intB . "\n";
            echo "Subtraction (A - B):   " . $intA - $intB . "\n";
            echo "Multiplication (A * B):" . $intA * $intB . "\n";
            echo "Division (A / B):      " . $intA / $intB . "\n"; // Result will be float
            echo "Modulus (Remainder) (A % B): " . $intA % $intB . "\n"; 
        ?>
    </pre>

    <h2>2. Float Arithmetic Operations (Task 3)</h2>
    <p>Variables: $floatX = <?php echo $floatX; ?>, $floatY = <?php echo $floatY; ?></p>
    <pre>
        <?php
            echo "Addition (X + Y):      " . $floatX + $floatY . "\n";
            echo "Subtraction (X - Y):   " . $floatX - $floatY . "\n";
            echo "Multiplication (X * Y):" . $floatX * $floatY . "\n";
            echo "Division (X / Y):      " . $floatX / $floatY . "\n";
            // Modulus operator (%) is typically used on integers, but PHP converts floats to integers for this operation.
            echo "Modulus (X % Y):       " . $floatX % $floatY . "\n"; 
        ?>
    </pre>

    <h2>3. PHP Built-in Math Functions (Task 4)</h2>
    <?php $testNum = 4.7; ?>
    <p>Testing functions on <?php echo $testNum; ?></p>
    <pre>
        <?php
            $num1 = 10;
            $num2 = 50;
            $num3 = 5;

            // min(): Finds the lowest value
            echo "min(10, 50, 5):   " . min($num1, $num2, $num3) . "\n";
            
            // max(): Finds the highest value
            echo "max(10, 50, 5):   " . max($num1, $num2, $num3) . "\n";
            
            // round(): Rounds a number to the nearest integer
            echo "round(4.7):       " . round($testNum) . "\n"; // Rounds to 5
            echo "round(4.3):       " . round(4.3) . "\n"; // Rounds to 4
            
            // ceil(): Rounds fractions UP
            echo "ceil(4.7):        " . ceil($testNum) . "\n"; // Rounds up to 5
            
            // floor(): Rounds fractions DOWN
            echo "floor(4.7):       " . floor($testNum) . "\n"; // Rounds down to 4
        ?>
    </pre>

    <h2>4. Simple Calculator (Task 5)</h2>
    <?php
        // Variables for the Simple Calculator
        $calcNum1 = 15;
        $calcNum2 = 3;
        $operation = '/'; // Change this variable to test different operations: '+', '-', '*', '/'

        $calcResult = "Invalid Operation";

        switch ($operation) {
            case '+':
                $calcResult = $calcNum1 + $calcNum2;
                break;
            case '-':
                $calcResult = $calcNum1 - $calcNum2;
                break;
            case '*':
                $calcResult = $calcNum1 * $calcNum2;
                break;
            case '/':
                // Handle division by zero
                $calcResult = ($calcNum2 != 0) ? ($calcNum1 / $calcNum2) : "Cannot divide by zero";
                break;
        }
    ?>
    <div style="background-color: #fffacd; padding: 15px; border: 1px dashed #daa520; border-radius: 5px;">
        <p><strong>Input:</strong> Num1 = <?php echo $calcNum1; ?>, Num2 = <?php echo $calcNum2; ?>, Operation = '<?php echo $operation; ?>'</p>
        <p><strong>Result:</strong> <span class="result"><?php echo "$calcNum1 $operation $calcNum2 = $calcResult"; ?></span></p>
        <p><em>(You can change the $operation variable in the PHP code to test other functions.)</em></p>
    </div>
</div>

</body>
</html>