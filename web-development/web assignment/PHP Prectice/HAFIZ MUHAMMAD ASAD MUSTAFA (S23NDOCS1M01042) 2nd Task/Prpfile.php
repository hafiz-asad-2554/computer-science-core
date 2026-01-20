<?php
// Personal Info
$name = "HAFIZ MUHAMMAD ASAD MUSTAFA";  // String
$age = 25;                            // Integer
$email = "hafizasad2554@gmial.com"; // String

$skills = [
    "PHP" => "Advanced",
    "HTML/CSS" => "Expert",
    "JavaScript" => "Intermediate",
    "Database (MySQL)" => "Intermediate"
];

$currentDay = date("l"); 
$currentHour = (int)date("H");

if ($currentHour >= 5 && $currentHour < 12) {
    $greeting = "Good Morning! ☕ Time to code.";
    $time_class = 'morning';
} elseif ($currentHour >= 12 && $currentHour < 17) {
    $greeting = "Good Afternoon! ☀️ Keep pushing forward.";
    $time_class = 'afternoon';
} elseif ($currentHour >= 17 && $currentHour < 21) {
    $greeting = "Good Evening! 🌙 Time for the final sprint.";
    $time_class = 'evening';
} else {
    $greeting = "Hello Night Owl! 🦉 Focus is key.";
    $time_class = 'night';
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title><?php echo $name; ?> | Developer Profile</title>
    <style>
        
        body { 
            font-family: 'Consolas', monospace; 
            background: linear-gradient(135deg, #121212 0%, #333333 100%); 
            color: #e0e0e0; 
            display: flex;
            justify-content: center;
            align-items: center;
            min-height: 100vh;
            padding: 40px;
        }

        .container { 
            width: 100%;
            max-width: 800px;
            padding: 40px;
            
            background: rgba(255, 255, 255, 0.05);
            backdrop-filter: blur(15px); 
            border-radius: 20px;
            border: 1px solid rgba(255, 255, 255, 0.15); 
            box-shadow: 0 10px 40px 0 rgba(0, 0, 0, 0.5); 
        }
        
        h1 { 
            color: #00e676; 
            border-bottom: 3px solid #00e676;
            padding-bottom: 10px; 
            margin-bottom: 30px; 
            text-align: center;
            text-shadow: 0 0 8px rgba(0, 230, 118, 0.6); 
            font-size: 2.5em;
        }

        
        .greeting-bar {
            padding: 15px 20px;
            border-radius: 10px;
            margin-bottom: 30px;
            font-size: 1.1em;
            font-weight: bold;
            display: flex;
            justify-content: space-between;
            align-items: center;
        }
        /* Dynamic Greeting Colors */
        .morning { background: rgba(255, 165, 0, 0.2); color: #ffcc00; }
        .afternoon { background: rgba(0, 191, 255, 0.2); color: #87ceeb; }
        .evening { background: rgba(138, 43, 226, 0.2); color: #dda0dd; }
        .night { background: rgba(72, 61, 139, 0.2); color: #add8e6; }


        .info-card, .skills-card {
            background: rgba(0, 0, 0, 0.2); /* Slightly darker transparent background for sections */
            padding: 20px;
            border-radius: 10px;
            margin-bottom: 20px;
            border-left: 5px solid #00e676; /* Vertical accent line */
        }

        .info-card p {
            margin: 5px 0;
        }
        .info-card strong {
            color: #00e676;
            display: inline-block;
            width: 100px; /* Aligns the values */
        }

        /* Skills List Styling */
        .skills-card ul {
            list-style: none;
            padding: 0;
        }
        .skills-card li {
            background: rgba(0, 230, 118, 0.1);
            padding: 10px;
            margin-bottom: 8px;
            border-radius: 5px;
            border: 1px solid rgba(0, 230, 118, 0.3);
            display: flex;
            justify-content: space-between;
        }
        .level {
            color: #ffcc00; /* Yellow highlight for skill level */
            font-weight: bold;
        }
    </style>
</head>
<body>

<div class="container">
    <h1><?php echo $name; ?>'s Dev Profile <span style="color: #ffcc00;">[STATUS: ONLINE]</span></h1>
    
    <div class="greeting-bar <?php echo $time_class; ?>">
        <span><?php echo $greeting; ?></span>
        <span>Today is <?php echo $currentDay; ?></span>
    </div>

    <h2>// Personal Information</h2>
    <div class="info-card">
        <p><strong>Name:</strong> <?php echo $name; ?></p>
        <p><strong>Age:</strong> <?php echo $age; ?> years</p>
        <p><strong>Email:</strong> <?php echo $email; ?></p>
        <p><strong>Roll No:</strong> S23NDOCS1M01O42</p>
    </div>

    <h2>// Core Competencies (Skills)</h2>
    <div class="skills-card">
        <ul>
            <?php
            // Using a foreach loop to display the associative array
            foreach ($skills as $skill => $level) {
                echo "<li><span>{$skill}</span> <span class='level'>Level: {$level}</span></li>";
            }
            ?>
        </ul>
    </div>

</div>

</body>
</html>