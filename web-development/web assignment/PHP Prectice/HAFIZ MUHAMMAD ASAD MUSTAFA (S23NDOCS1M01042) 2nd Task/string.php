<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP String Manipulation</title>
    <style>
        body { font-family: 'Arial', sans-serif; background-color: #f0f8ff; color: #333; padding: 20px; }
        .container { max-width: 100%; margin: 30px auto; background-color: #ffffff; padding: 25px; border-radius: 10px; box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1); }
        h1 { color: #8a2be2; border-bottom: 2px solid #8a2be2; padding-bottom: 5px; margin-bottom: 20px; }
        h2 { color: #4682b4; margin-top: 25px; }
        .result-box { background-color: #f8f8f8; border: 1px solid #ddd; padding: 15px; border-radius: 5px; margin-bottom: 15px; }
        .code-output { font-family: 'Consolas', monospace; color: #d63384; font-weight: bold; }
        .observation { background-color: #ffe0e6; padding: 10px; border-left: 5px solid #d63384; margin-top: 15px; }
    </style>
</head>
<body>

<div class="container">
    <h1>String Manipulation Practice</h1>

    <?php
        //Declare a string variable containing your full name.
        $fullName = "HAFIZ MUHAMMAD ASAD MUSTAFA";
        $rollNo = "S23NDOCS1M01O42";
    ?>

    <h2>1. Original Details</h2>
    <div class="result-box">
        Original Name: <span class="code-output"><?php echo $fullName; ?></span><br>
        Roll Number: <span class="code-output"><?php echo $rollNo; ?></span>
    </div>

    <h2>2. String Functions (Task 3.3)</h2>
    <div class="result-box">
        <?php
            // Convert your name to all uppercase
            $upperCase = strtoupper($fullName);
            echo "<li>Uppercase: <span class='code-output'>" . $upperCase . "</span></li>";

            // Convert your name to all lowercase
            $lowerCase = strtolower($fullName);
            echo "<li>Lowercase: <span class='code-output'>" . $lowerCase . "</span></li>";

            // Find the length of your name
            $nameLength = strlen($fullName);
            echo "<li>Length (including spaces): <span class='code-output'>" . $nameLength . " characters</span></li>";

            // Replace your last name ('MUSTAFA') with a different one ('RAO')
            // str_replace(search, replace, subject)
            $newName = str_replace("MUSTAFA", "RAO", $fullName);
            echo "<li>Name with Last Name Replaced (MUSTAFA -> RAO): <span class='code-output'>" . $newName . "</span></li>";
        ?>
    </div>

    <h2>3. Quotes Observation (Task 3.4 & 3.5)</h2>
    <?php
        $fruit = "Mango";
        $quantity = 5;

        //Create a string with double quotes that includes a variable inside it.
        $doubleQuotes = "I want to buy $quantity kilograms of $fruit this week.";

        // Create the same string with single quotes.
        $singleQuotes = 'I want to buy $quantity kilograms of $fruit this week.';
    ?>
    
    <div class="result-box">
        <p><strong>Double Quotes Output:</strong> <span class="code-output"><?php echo $doubleQuotes; ?></span></p>
        <p><strong>Single Quotes Output:</strong> <span class="code-output"><?php echo $singleQuotes; ?></span></p>
    </div>

    <div class="observation">
        <strong>Observation:</strong>
        <p>Double quotes (<code>" "</code>) variables ko **process** karte hain (yaani, <code>$fruit</code> ki jagah **Mango** dikhaate hain). Isay **Variable Interpolation** kehte hain.</p>
        <p>Single quotes (<code>' '</code>) variables ko **ignore** karte hain aur unhein **literal text** ki tarah dikhaate hain (yaani, woh <code>$fruit</code> hi dikhaayenge).</p>
    </div>

</div>

</body>
</html>