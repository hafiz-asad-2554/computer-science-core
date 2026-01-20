<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Ternary Operator Demonstration</title>
    <style>
        body { font-family: Arial, sans-serif; padding: 20px; background-color: #f7f9fc; color: #333; }
        .container { max-width: 800px; margin: 30px auto; background-color: #fff; padding: 30px; border-radius: 10px; box-shadow: 0 0 20px rgba(0, 0, 0, 0.1); }
        h1 { color: #007bff; border-bottom: 2px solid #007bff; padding-bottom: 10px; }
        h2 { color: #28a745; margin-top: 25px; }
        pre { background-color: #e9ecef; padding: 15px; border-radius: 5px; overflow-x: auto; white-space: pre-wrap; word-wrap: break-word; }
        .result { padding: 10px; margin-top: 10px; font-weight: bold; border-radius: 5px; }
        .hot { background-color: #ffe0e0; color: #cc0000; }
        .moderate { background-color: #fff8e1; color: #ff6600; }
        .cold { background-color: #e0f2ff; color: #0073e6; }
    </style>
</head>
<body>

    <div class="container">
        <h1>PHP Conditional Logic Comparison</h1>

        <?php
            // --- 1. Variable Setup ---
            $temperature = 28; // The numerical value to test (Celsius)
            $basic_cold_threshold = 15;
            $moderate_threshold = 20;
            $very_hot_threshold = 35;
            
            // Initial Output
            echo "<h2>Testing Temperature: {$temperature}°C</h2>";
        ?>
        
        <!-- ======================================================= -->
        <!-- 2. Basic Ternary Operator: Hot or Cold -->
        <!-- ======================================================= -->
        <h2>Basic Ternary Operator (Hot or Cold)</h2>
        <p>Condition: Is temperature > 30?</p>

        <?php
            // Basic Ternary Operator
            // (condition) ? value_if_true : value_if_false
            $basic_status = ($temperature > 30) ? "Hot 🥵" : "Cold 🥶";
            $basic_class = ($temperature > 30) ? "hot" : "cold";
        ?>

        <pre>
$basic_status = ($temperature > 30) ? "Hot 🥵" : "Cold 🥶";
        </pre>
        <div class="result <?php echo $basic_class; ?>">
            Result: The weather is **<?php echo $basic_status; ?>**
        </div>
        
        
        <!-- ======================================================= -->
        <!-- 3. Nested Ternary Operator: Three States -->
        <!-- ======================================================= -->
        <h2>Nested Ternary Operator (Very Hot, Moderate, Cold)</h2>
        <p>Conditions: Very Hot (> <?php echo $very_hot_threshold; ?>), Moderate (> <?php echo $moderate_threshold; ?>), Cold (Else)</p>

        <?php
            // Nested Ternary Operator (simulates if-elseif-else)
            $nested_status = ($temperature > $very_hot_threshold) 
                ? "Very Hot 🔥"                                 // If TRUE
                : (($temperature > $moderate_threshold) 
                   ? "Moderate 😎"                              // If inner TRUE
                   : "Cold 🥶");                               // If inner FALSE
                   
            // Determine CSS class for result display
            if ($temperature > $very_hot_threshold) {
                $nested_class = "hot";
            } elseif ($temperature > $moderate_threshold) {
                $nested_class = "moderate";
            } else {
                $nested_class = "cold";
            }
        ?>

        <pre>
$nested_status = ($temperature > <?php echo $very_hot_threshold; ?>) 
    ? "Very Hot 🔥"
    : (($temperature > <?php echo $moderate_threshold; ?>) 
       ? "Moderate 😎"
       : "Cold 🥶");
        </pre>
        <div class="result <?php echo $nested_class; ?>">
            Result: The weather is **<?php echo $nested_status; ?>**
        </div>


        <!-- ======================================================= -->
        <!-- 4. If-Else Comparison (Achieves Same Result) -->
        <!-- ======================================================= -->
        <h2>If-Else-If Comparison</h2>
        <p>This structure achieves the exact same result as the nested ternary, but is generally more readable for multiple conditions.</p>

        <?php
            // If-Else-If equivalent structure
            if ($temperature > $very_hot_threshold) {
                $if_else_status = "Very Hot 🔥";
            } elseif ($temperature > $moderate_threshold) {
                $if_else_status = "Moderate 😎";
            } else {
                $if_else_status = "Cold 🥶";
            }
        ?>

        <pre>
if ($temperature > <?php echo $very_hot_threshold; ?>) {
    $if_else_status = "Very Hot 🔥";
} elseif ($temperature > <?php echo $moderate_threshold; ?>) {
    $if_else_status = "Moderate 😎";
} else {
    $if_else_status = "Cold 🥶";
}
        </pre>
        <div class="result <?php echo $nested_class; ?>">
            Result: The weather is **<?php echo $if_else_status; ?>**
        </div>
        
    </div>

</body>
</html>