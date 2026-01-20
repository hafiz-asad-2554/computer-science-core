<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Colorful Triangle Pattern</title>
    <style>
        /* --- Developer Classy Look CSS --- */
        body { 
            font-family: 'Consolas', monospace; 
            background: linear-gradient(135deg, #121212 0%, #333333 100%); 
            color: #e0e0e0; 
            display: flex;
            justify-content: center;
            align-items: center;
            min-height: 100vh;
            margin: 0;
            flex-direction: column;
        }

        .container { 
            padding: 30px;
            /* Glassmorphism Effect */
            background: rgba(255, 255, 255, 0.05); 
            backdrop-filter: blur(10px); 
            border-radius: 15px;
            border: 1px solid rgba(255, 255, 255, 0.1); 
            box-shadow: 0 8px 32px 0 rgba(0, 0, 0, 0.5); 
            text-align: center;
        }
        
        h1 { 
            color: #00e676; 
            border-bottom: 3px solid #00e676;
            padding-bottom: 10px; 
            margin-bottom: 30px; 
            text-shadow: 0 0 8px rgba(0, 230, 118, 0.6); 
            font-size: 1.8em;
        }

        .pattern-area {
            line-height: 1.2; /* Reduce line spacing */
            padding: 20px;
            background: rgba(0, 0, 0, 0.3);
            border-radius: 8px;
            display: inline-block; /* Center the block */
        }
        
        .row {
            /* Each row will be a div */
            margin: 0;
            padding: 0;
            white-space: nowrap;
        }

        .star {
            font-size: 24px;
            font-weight: bold;
            display: inline-block;
            margin: 0 2px;
            transition: transform 0.2s;
            text-shadow: 0 0 5px currentColor; /* Star glow */
        }

        /* --- Dynamic Color Classes --- */
        .color-1 .star { color: #00e676; } /* Neon Green */
        .color-2 .star { color: #64ffda; } /* Neon Teal */
        .color-3 .star { color: #ffcc00; } /* Neon Yellow */
        .color-4 .star { color: #ff4d4d; } /* Neon Red */
        .color-5 .star { color: #82b1ff; } /* Neon Blue */
        
        /* Hover Effect for interaction */
        .star:hover {
            transform: scale(1.2);
        }
    </style>
</head>
<body>

<div class="container">
    <h1><span style="color: #ffcc00;">&gt;</span> PATTERN_GENERATOR.PHP</h1>
    
    <div class="pattern-area">
    <?php

    $rows = 5; 
    $num_colors = 5; // Total colors available (color-1 to color-5)

    // Outer loop (controls the rows)
    for ($i = 1; $i <= $rows; $i++) {
        
        // 1. Determine the color class based on the row number
        // (i % num_colors) + 1 cycles the color from 1 to 5
        $colorClass = "color-" . (($i % $num_colors) + 1);
        
        // 2. Wrap the row in a DIV with the color class
        echo "<div class='row $colorClass'>";
        
        // Inner loop (controls the number of stars in the current row)
        for ($j = 1; $j <= $i; $j++) {
            // 3. Wrap each star in a SPAN with the 'star' class
            echo "<span class='star'>*</span>";
        }
        
        echo "</div>";
    }

    ?>
    </div>
    <p style="margin-top: 20px; font-size: 0.9em; color: #64ffda;">PHP & HTML/CSS Combined Pattern.</p>
</div>

</body>
</html>