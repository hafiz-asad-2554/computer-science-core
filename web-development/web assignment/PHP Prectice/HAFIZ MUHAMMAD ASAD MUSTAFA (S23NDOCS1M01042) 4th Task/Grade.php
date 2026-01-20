<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP Grade Calculator | Developer Classy Look</title>
    <style>
        body { 
            font-family: 'Consolas', monospace; 
            background: linear-gradient(135deg, #1e3c72 0%, #2a5298 100%); 
            color: #e0e0e0; 
            display: flex;
            justify-content: center;
            align-items: center;
            min-height: 100vh;
            margin: 0;
        }

        .container { 
            width: 90%;
            max-width: 600px;
            padding: 30px;
            background: rgba(255, 255, 255, 0.05); 
            backdrop-filter: blur(10px); 
            border-radius: 15px;
            border: 1px solid rgba(255, 255, 255, 0.1); 
            box-shadow: 0 8px 32px 0 rgba(0, 0, 0, 0.3); 
        }
        
        h1 { 
            color: #64ffda; 
            border-bottom: 2px solid #64ffda;
            padding-bottom: 10px; 
            margin-bottom: 20px; 
            text-align: center;
            text-shadow: 0 0 5px rgba(100, 255, 218, 0.7); 
        }

        .input-group label {
            display: block;
            margin-bottom: 8px;
            font-size: 1.1em;
            color: #a9ffed;
        }

        .input-group input[type="number"] {
            width: 100%;
            padding: 12px;
            margin-bottom: 20px;
            border: 1px solid #64ffda;
            background: rgba(0, 0, 0, 0.3); 
            color: #ffffff;
            border-radius: 8px;
            box-sizing: border-box;
            font-size: 1em;
        }

        button {
            width: 100%;
            padding: 12px;
            background: #64ffda; 
            color: #1a1a1a;
            border: none;
            border-radius: 8px;
            cursor: pointer;
            font-weight: bold;
            transition: background 0.3s, transform 0.3s;
        }

        button:hover {
            background: #00e676; 
            transform: translateY(-2px);
        }

        .result-box { 
            margin-top: 30px; 
            padding: 20px; 
            border-radius: 8px;
            text-align: center;
            font-size: 1.2em;
            font-weight: bold;
            box-shadow: 0 0 15px rgba(100, 255, 218, 0.4);
        }
        
        .grade-A { background: rgba(0, 255, 0, 0.2); color: #00ff00; }
        .grade-B { background: rgba(255, 255, 0, 0.2); color: #ffff00; }
        .grade-C { background: rgba(255, 165, 0, 0.2); color: #ffa500; }
        .grade-D { background: rgba(255, 69, 0, 0.2); color: #ff4500; }
        .grade-F { background: rgba(255, 0, 0, 0.2); color: #ff0000; }
    </style>
</head>
<body>

<div class="container">
    <h1><span style="font-size: 1.5em; color: #ffcc00;">&gt;</span> GRADE_CALCULATOR_V1.0.PHP</h1>
    
    <?php
    $score = null;
    $grade = null;
    $message = null;
    $grade_class = null;

    if ($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['score'])) {
        $score = (float)$_POST['score'];

        if ($score >= 90 && $score <= 100) {
            $grade = "A";
            $message = "EXCELLENT! You truly master the subject. Keep up the high standard!";
            $grade_class = 'grade-A';
        } elseif ($score >= 80) {
            $grade = "B";
            $message = "VERY GOOD! Solid performance, you've done a great job.";
            $grade_class = 'grade-B';
        } elseif ($score >= 70) {
            $grade = "C";
            $message = "GOOD! Satisfactory understanding, but there's room for improvement.";
            $grade_class = 'grade-C';
        } elseif ($score >= 60) {
            $grade = "D";
            $message = "PASSED! Acceptable effort, focus on foundational concepts next time.";
            $grade_class = 'grade-D';
        } elseif ($score < 60 && $score >= 0) {
            $grade = "F";
            $message = "FAIL. Review the material and try again. Don't give up!";
            $grade_class = 'grade-F';
        } else {
            $grade = "N/A";
            $message = "ERROR: Invalid score entered. Please enter a value between 0 and 100.";
            $grade_class = 'grade-F';
        }
    }
    ?>

    <form method="POST" action="grades.php">
        <div class="input-group">
            <label for="score">Enter Numerical Score (0-100):</label>
            <input 
                type="number" 
                id="score" 
                name="score" 
                min="0" 
                max="100" 
                step="0.01" 
                required 
                placeholder="e.g., 75.5"
                value="<?php echo htmlspecialchars($score ?? ''); ?>"
            >
        </div>
        <button type="submit">Calculate Grade</button>
    </form>

    <?php if ($grade !== null): ?>
        <div class="result-box <?php echo $grade_class; ?>">
            <p style="font-size: 1.8em; margin: 5px 0;">GRADE: <?php echo $grade; ?></p>
            <p style="font-size: 1.1em; margin: 10px 0 0;"><?php echo $message; ?></p>
        </div>
    <?php endif; ?>

</div>

</body>
</html>