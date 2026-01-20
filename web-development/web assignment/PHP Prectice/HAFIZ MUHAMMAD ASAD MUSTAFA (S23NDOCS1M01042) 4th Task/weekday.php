<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Day of the Week Message & Style Editor</title>
    <style>
        body { font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; padding: 20px; background-color: #f4f7f6; }
        .container { max-width: 750px; margin: 30px auto; background-color: #fff; padding: 30px; border-radius: 10px; box-shadow: 0 4px 10px rgba(0, 0, 0, 0.1); }
        h1 { color: #333; }
        
        /* Menu Styling */
        .menu, .style-editor { background-color: #e6f7ff; padding: 15px; border-radius: 8px; margin-bottom: 20px; border: 1px solid #cceeff; }
        .menu select, .menu input[type="submit"], .style-editor input[type="color"], .style-editor input[type="submit"] { padding: 8px; border-radius: 5px; border: 1px solid #ccc; margin-right: 10px; }
        .menu input[type="submit"], .style-editor input[type="submit"] { background-color: #007bff; color: white; cursor: pointer; border: none; }
        
        /* Default Message Style (used for baseline and the 'default' case) */
        .default { border-left: 5px solid #aaa; padding: 15px; }

        /* Day-Specific Base Styles (These are overridden by user's custom styles) */
        .Sunday { background-color: #ffe6e6; color: #cc0000; font-style: italic; }
        .Monday { background-color: #e6f7ff; color: #0059b3; font-weight: bold; }
        .Tuesday { background-color: #e6ffe6; color: #008000; font-size: 1.1em; }
        .Wednesday { background-color: #fff0e6; color: #cc6600; text-decoration: underline; }
        .Thursday { background-color: #f2e6ff; color: #6600cc; letter-spacing: 1px; }
        .Friday { background-color: #ffffe6; color: #b38600; font-family: cursive; }
        .Saturday { background-color: #e6f2ff; color: #005c99; text-shadow: 1px 1px 1px #ccc; }
    </style>
</head>
<body>

    <div class="container">
        <h1>Current Day Message & Style Editor</h1>

        <?php
            // --- 1. Retrieve current/simulated day and custom styles ---
            
            // Get the current day or simulated day from the menu
            if (isset($_POST['simulate_day'])) {
                $day_of_week = htmlspecialchars($_POST['day_select']);
            } else {
                $day_of_week = date('l'); 
            }

            // Get custom styles from the Style Editor form, or set defaults
            $font_color = isset($_POST['font_color']) ? htmlspecialchars($_POST['font_color']) : '#333333';
            $bg_color = isset($_POST['bg_color']) ? htmlspecialchars($_POST['bg_color']) : '#f0f0f0';
            $font_size = isset($_POST['font_size']) ? htmlspecialchars($_POST['font_size']) : 'medium';
            
            // Map font size options to CSS values
            $font_size_map = [
                'small' => '0.9em',
                'medium' => '1.1em',
                'large' => '1.3em',
                'xlarge' => '1.5em'
            ];
            $custom_font_size = $font_size_map[$font_size] ?? $font_size_map['medium'];

            // Construct inline style attribute
            $custom_style = "style='color: $font_color; background-color: $bg_color; font-size: $custom_font_size;'";
            
            
            // --- Display the Day Selection Menu ---
            echo "<div class='menu'>";
            echo "<h2>1. Day Selection Menu</h2>";
            echo "<p>Currently displaying message for: **" . $day_of_week . "**</p>";
            echo "<form method='POST' action=''>";
            
            $day_options = array(
                "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "UnknownDay" 
            );
            
            echo "<select name='day_select'>";
            foreach ($day_options as $option) {
                $selected = ($option === $day_of_week) ? 'selected' : '';
                echo "<option value='" . $option . "' " . $selected . ">" . $option . "</option>";
            }
            echo "</select>";
            echo "<input type='hidden' name='font_color' value='$font_color'>";
            echo "<input type='hidden' name='bg_color' value='$bg_color'>";
            echo "<input type='hidden' name='font_size' value='$font_size'>";
            echo "<input type='submit' name='simulate_day' value='Apply Day'>";
            echo "</form>";
            echo "</div>";
            
            // --- Display the Style Editor Menu ---
            echo "<div class='style-editor'>";
            echo "<h2>2. Edit Style Menu</h2>";
            echo "<form method='POST' action=''>";
            
            // Font Color Input
            echo "<label for='font_color'>Font Color:</label>";
            echo "<input type='color' id='font_color' name='font_color' value='$font_color'>";
            
            // Background Color Input
            echo "<label for='bg_color'>BG Color:</label>";
            echo "<input type='color' id='bg_color' name='bg_color' value='$bg_color'>";
            
            // Font Size Select
            echo "<label for='font_size'>Font Size:</label>";
            echo "<select id='font_size' name='font_size'>";
            $size_options = ['small' => 'Small', 'medium' => 'Medium', 'large' => 'Large', 'xlarge' => 'Extra Large'];
            foreach ($size_options as $key => $label) {
                $selected = ($key === $font_size) ? 'selected' : '';
                echo "<option value='$key' $selected>$label</option>";
            }
            echo "</select>";
            
            // Hidden fields to preserve the selected day
            echo "<input type='hidden' name='day_select' value='$day_of_week'>";
            
            echo "<input type='submit' name='apply_style' value='Apply Styles'>";
            echo "</form>";
            echo "</div>";


            // --- 2. Use switch statement for daily messages ---
            $message = '';
            $base_class = '';

            switch ($day_of_week) {
                case 'Sunday':
                    $message = "Rest and recharge! Sundays are for reflection and preparation for the week ahead. 🧘";
                    $base_class = 'Sunday';
                    break;
                case 'Monday':
                    $message = "It's Monday! Time to attack your goals with enthusiasm. 'The journey of a thousand miles begins with a single step.'";
                    $base_class = 'Monday';
                    break;
                case 'Tuesday':
                    $message = "Tuesday: Stay focused! You're past the hardest part. Keep building momentum towards Friday. 🚀";
                    $base_class = 'Tuesday';
                    break;
                case 'Wednesday':
                    $message = "Happy Hump Day! You've made it halfway. 'A smooth sea never made a skilled sailor.' Keep pushing through!";
                    $base_class = 'Wednesday';
                    break;
                case 'Thursday':
                    $message = "Almost there! Thursday is proof that what you're doing matters. Finish strong! 💪";
                    $base_class = 'Thursday';
                    break;
                case 'Friday':
                    $message = "It's finally Friday! Wishing you peace and happiness for the weekend. Enjoy your break! 🎉";
                    $base_class = 'Friday';
                    break;
                case 'Saturday':
                    $message = "Weekend freedom! Dedicate this day to relaxation, hobbies, and spending time with loved ones. 🥂";
                    $base_class = 'Saturday';
                    break;
                default:
                    $message = "System Error: Unable to determine the day of the week. Please check the date settings or select a day from the menu.";
                    $base_class = 'default';
                    break;
            }
            
            // --- 3. Display the result with dynamic styling ---
            echo "<h2>Message for " . $day_of_week . "</h2>";
            
            // We use the base class for the unique day styles (e.g., italics, bold, underline)
            // and inline styles for the user's color/size choices.
            echo "<div class='result-box " . $base_class . "' " . $custom_style . ">";
            echo "<p>" . $message . "</p>";
            echo "</div>";
        ?>

    </div>

</body>
</html>