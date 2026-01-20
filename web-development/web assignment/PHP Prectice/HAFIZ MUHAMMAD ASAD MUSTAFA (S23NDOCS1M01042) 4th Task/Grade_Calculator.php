<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Dynamic Grade Calculator</title>
    <style>
        body { font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; padding: 20px; background-color: #f4f7f6; }
        .container { max-width: 600px; margin: 30px auto; background-color: #fff; padding: 30px; border-radius: 12px; box-shadow: 0 6px 15px rgba(0, 0, 0, 0.1); }
        h1, h2 { color: #333; border-bottom: 2px solid #eee; padding-bottom: 10px; }
        table { width: 100%; border-collapse: collapse; margin-top: 15px; }
        th, td { border: 1px solid #ddd; padding: 10px; text-align: left; }
        th { background-color: #e8e8e8; }
        input[type="number"] { width: 80px; padding: 5px; border: 1px solid #ccc; border-radius: 4px; }
        input[type="submit"] { background-color: #007bff; color: white; padding: 10px 15px; border: none; border-radius: 6px; cursor: pointer; margin-top: 15px; font-size: 16px; transition: background-color 0.3s; }
        input[type="submit"]:hover { background-color: #0056b3; }
        .result-box { margin-top: 25px; padding: 20px; border-radius: 8px; font-weight: bold; }
        .A-grade { background-color: #d4edda; color: #155724; }
        .B-grade { background-color: #fff3cd; color: #856404; }
        .C-grade { background-color: #ffe5cc; color: #8d4c0c; }
        .F-grade { background-color: #f8d7da; color: #721c24; }
        .score-row td:last-child { text-align: center; }
    </style>
</head>
<body>

    <div class="container">
        <h1>Student Grade Calculator</h1>

        <?php
            // 1. Define the list of subjects and maximum possible marks
            $subjects = array("Math", "Science", "English", "History", "Computer");
            $max_marks_per_subject = 100;
            $total_max_marks = count($subjects) * $max_marks_per_subject;

            // 2. Check if the form was submitted
            if (isset($_POST['submit_scores'])) {
                
                // --- CALCULATION LOGIC ---
                $total_obtained_marks = 0;
                $submitted_scores = array();

                // Retrieve scores and calculate total
                foreach ($subjects as $subject) {
                    // Use a clean subject name for the POST key
                    $key = strtolower(str_replace(' ', '_', $subject));
                    
                    // Sanitize and ensure score is numeric, defaulting to 0 if not valid
                    $score = filter_input(INPUT_POST, $key, FILTER_VALIDATE_INT, array("options" => array("min_range" => 0, "max_range" => $max_marks_per_subject)));
                    
                    if ($score === false || $score === null) {
                        $score = 0;
                    }
                    
                    $total_obtained_marks += $score;
                    $submitted_scores[$subject] = $score;
                }
                
                // Calculate Percentage
                if ($total_max_marks > 0) {
                    $percentage = ($total_obtained_marks / $total_max_marks) * 100;
                } else {
                    $percentage = 0;
                }

                // Determine Grade and Motivational Message
                $grade = '';
                $message = '';
                $css_class = '';

                if ($percentage >= 90) {
                    $grade = 'A+';
                    $message = "🌟 Exceptional work! Your outstanding dedication truly shines through. Keep aiming high!";
                    $css_class = 'A-grade';
                } elseif ($percentage >= 80) {
                    $grade = 'A';
                    $message = "✅ Excellent performance! You've achieved a great result. Celebrate your success and keep up the momentum!";
                    $css_class = 'A-grade';
                } elseif ($percentage >= 70) {
                    $grade = 'B';
                    $message = "👍 Good job! This is a strong performance. With a little more focus, you can reach the next level.";
                    $css_class = 'B-grade';
                } elseif ($percentage >= 60) {
                    $grade = 'C';
                    $message = "📚 Satisfactory effort. Review your notes and identify areas for improvement. You've got this!";
                    $css_class = 'C-grade';
                } else {
                    $grade = 'F';
                    $message = "💡 Need to improve. Don't be discouraged—this is a chance to re-evaluate your study habits. Success is built on trying again!";
                    $css_class = 'F-grade';
                }
                
                // --- DISPLAY RESULTS ---
                echo "<h2>Calculation Results</h2>";
                
                // Table showing submitted scores
                echo "<table><thead><tr><th>Subject</th><th>Score Submitted</th><th>Max Marks</th></tr></thead><tbody>";
                foreach ($submitted_scores as $subject => $score) {
                    echo "<tr><td>" . htmlspecialchars($subject) . "</td><td>" . $score . "</td><td>" . $max_marks_per_subject . "</td></tr>";
                }
                echo "</tbody></table>";

                // Final Summary Table
                echo "<h2>Overall Summary</h2>";
                echo "<table>";
                echo "<tr><th>Total Marks Obtained</th><td>" . $total_obtained_marks . " / " . $total_max_marks . "</td></tr>";
                echo "<tr><th>Overall Percentage</th><td>" . number_format($percentage, 2) . "%</td></tr>";
                echo "<tr><th>Final Grade</th><td>**" . $grade . "**</td></tr>";
                echo "</table>";
                
                // Motivational Message
                echo "<div class='result-box " . $css_class . "'>";
                echo "Motivational Message: " . $message;
                echo "</div>";
                
                echo "<p><a href='#' onclick='window.location.reload();'>Calculate another grade</a></p>";

            } else {
                // --- DISPLAY INPUT FORM ---
                echo "<h2>Enter Marks Obtained (Max: $max_marks_per_subject per subject)</h2>";
                
                echo "<form method='POST' action=''>";
                echo "<table>";
                echo "<thead><tr><th>Subject</th><th>Marks Obtained</th></tr></thead>";
                echo "<tbody>";

                // Use a foreach loop to dynamically create table rows for each subject
                foreach ($subjects as $subject) {
                    // Create a clean POST variable name for the input field
                    $input_name = strtolower(str_replace(' ', '_', $subject));
                    
                    echo "<tr class='score-row'>";
                    echo "<td>" . htmlspecialchars($subject) . "</td>";
                    echo "<td><input type='number' name='" . $input_name . "' min='0' max='" . $max_marks_per_subject . "' value='0' required></td>";
                    echo "</tr>";
                }

                echo "</tbody>";
                echo "</table>";
                
                echo "<input type='submit' name='submit_scores' value='Calculate Final Grade'>";
                echo "</form>";
            }
        ?>

    </div>

</body>
</html>