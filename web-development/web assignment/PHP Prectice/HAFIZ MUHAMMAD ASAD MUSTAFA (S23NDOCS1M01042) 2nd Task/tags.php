<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP Tags Practice</title>
    <style>
        body { font-family: sans-serif; padding: 30px; background-color: #f4f4f4; }
        .greeting { color: #007bff; font-size: 24px; font-weight: bold; }
        .date { color: #28a745; font-size: 18px; }
        .section { background-color: #fff; padding: 15px; border-radius: 8px; margin-bottom: 20px; box-shadow: 0 2px 4px rgba(0,0,0,0.1); }
    </style>
</head>
<body>

    <h1>PHP Tags Demonstration</h1>

    <div class="section">
        <h2>Standard PHP Tags <? ... ?></h2>
        <div class="greeting">
            <?php
                
                // Yeh sabse aam aur hamesha kaam karne walatag hai.
                // Use standard PHP tags to display a greeting message.
                echo "Hello! Welcome to PHP Practice.";
            ?>
        </div>
    </div>

    <div class="section">
        <h2>2. Short Echo Tags <? ... ?></h2>
        <p>Short Echo Tags sirf **`echo`** statement ko shortcut mein likhne ke liye istemal hote hain.</p>
        
        <div class="date">
            <?php
                // ab is trah sy hm date nikal skty hn but only y sy year he nikly ga q k hmny specofied kr diya yay
                $currentYear = date("Y");
            ?>
            The current year is: <?= $currentYear ?>
        </div>
    </div>

    <div class="section">
        <h2>3. PHP Code Comments</h2>
        <p>PHP mein comments code ko samjhane (document) karne ke liye istemal hote hain. Comments ko PHP ignore kar deta hai.</p>
        
        <?php
            // Single-line comment my  Yeh doosra tareeqa hai single line comment ka
            #  Hash # bhi single line comment ke liye istemal hota hai
            
            /*
             * Multi-line comment ko is trah sy bnaty hn
             * yaha hm peragraph wgyra ko bhi cumment my use kr skty hn,
             * mostly developer comment ka use sirf us time krty hn jb kisi line ya block my error ho
            */
            echo "<p style='color: #dc3545;'>Check the source code of this page to see the comments!</p>";
        ?>
    </div>

</body>
</html>