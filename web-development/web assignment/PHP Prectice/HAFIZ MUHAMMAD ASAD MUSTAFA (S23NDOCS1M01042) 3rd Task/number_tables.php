<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Number Table 1-100</title>
</head>
<body>

    <h1>Task 1: Number Tables with For Loop (1 to 100)</h1>
    
    <?php
    // Helper function to check for prime numbers (Task 5)
    function isPrime($num) {
        if ($num <= 1) return false;
        if ($num === 2) return true;
        if ($num % 2 === 0) return false;
        for ($i = 3; $i * $i <= $num; $i += 2) { 
            if ($num % $i == 0) return false;
        }
        return true;
    }
    ?>

    <table border="1" cellpadding="10" cellspacing="0" style="width: 50%; margin: 20px auto; text-align: center; font-family: Arial, sans-serif;">
        <?php
        $number = 1;
        
        // Task 2 & 3: Nested for loops for 10 rows and 10 columns
        for ($row = 1; $row <= 10; $row++) {
            
            // Task 4: Alternating background colors using inline style
            // Odd rows: Light Gray | Even rows: White
            $rowColor = ($row % 2 == 0) ? '#f0f0f0' : '#ffffff';
            echo "<tr style='background-color: $rowColor;'>";
            
            for ($col = 1; $col <= 10; $col++) {
                
                // Task 5: Highlight prime numbers using inline style
                $cellStyle = isPrime($number) ? 'style="background-color: #ffcc99; font-weight: bold;"' : '';
                
                echo "<td $cellStyle>$number</td>";
                $number++;
            }
            
            echo "</tr>";
        }
        ?>
    </table>
    
    <p style="text-align: center;">*Note: Prime numbers are highlighted in a light orange/peach color (Task 5).</p>

</body>
</html>