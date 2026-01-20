<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Upload Process - Da'am-ul-Hayat</title>
    
    <!-- Favicon -->
    <link rel="icon" type="image/png" href="assets/daamulhayat.png">
    
    <!-- CSS -->
    <link rel="stylesheet" href="css/main.css">
    <style>
        body {
            background-color: #f5f5f5;
            font-family: Arial, sans-serif;
            display: flex;
            justify-content: center;
            align-items: center;
            min-height: 100vh;
            margin: 0;
        }
        .container {
            background-color: white;
            padding: 30px;
            border-radius: 12px;
            box-shadow: 0 4px 20px rgba(0,0,0,0.1);
            width: 100%;
            max-width: 600px;
            text-align: center;
        }
        h1 {
            color: #333;
            margin-bottom: 20px;
        }
        .success {
            color: #28a745;
            background-color: #d4edda;
            border: 1px solid #c3e6cb;
            padding: 15px;
            border-radius: 6px;
            margin-bottom: 20px;
        }
        .error {
            color: #dc3545;
            background-color: #f8d7da;
            border: 1px solid #f5c6cb;
            padding: 15px;
            border-radius: 6px;
            margin-bottom: 20px;
        }
        .uploaded-image {
            max-width: 100%;
            max-height: 400px;
            margin-top: 20px;
            border-radius: 8px;
            box-shadow: 0 2px 10px rgba(0,0,0,0.1);
        }
        .back-link {
            display: inline-block;
            margin-top: 30px;
            padding: 10px 25px;
            background-color: #6c757d;
            color: white;
            text-decoration: none;
            border-radius: 6px;
            transition: background-color 0.3s;
        }
        .back-link:hover {
            background-color: #5a6268;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Image Upload Result</h1>
        
        <?php
        // Handle image upload
        if ($_SERVER['REQUEST_METHOD'] === 'POST') {
            // Check if file was uploaded without errors
            if (isset($_FILES['image']) && $_FILES['image']['error'] === 0) {
                $allowedTypes = ['image/jpeg', 'image/jpg', 'image/png', 'image/gif'];
                $maxFileSize = 2 * 1024 * 1024; // 2MB
                
                $fileName = $_FILES['image']['name'];
                $fileType = $_FILES['image']['type'];
                $fileSize = $_FILES['image']['size'];
                $fileTmpName = $_FILES['image']['tmp_name'];
                
                // Validate file type
                if (!in_array($fileType, $allowedTypes)) {
                    echo "<div class='error'>Error: Only JPG, JPEG, PNG, and GIF files are allowed.</div>";
                }
                // Validate file size
                elseif ($fileSize > $maxFileSize) {
                    echo "<div class='error'>Error: File size exceeds the maximum limit of 2MB.</div>";
                }
                else {
                    // Generate unique filename
                    $fileExtension = pathinfo($fileName, PATHINFO_EXTENSION);
                    $newFileName = uniqid() . '.' . $fileExtension;
                    $uploadPath = 'uploads/' . $newFileName;
                    
                    // Create uploads directory if it doesn't exist
                    if (!is_dir('uploads')) {
                        mkdir('uploads', 0777, true);
                    }
                    
                    // Move uploaded file to destination
                    if (move_uploaded_file($fileTmpName, $uploadPath)) {
                        echo "<div class='success'>Success: Your file has been uploaded successfully.</div>";
                        echo "<h3>Uploaded Image:</h3>";
                        echo "<img src='$uploadPath' alt='Uploaded Image' class='uploaded-image'>";
                    } else {
                        echo "<div class='error'>Error: There was a problem uploading your file.</div>";
                    }
                }
            } else {
                echo "<div class='error'>Error: No file was selected or an error occurred during upload.</div>";
            }
        } else {
            echo "<div class='error'>Error: Invalid request method.</div>";
        }
        ?>
        
        <br>
        <a href="upload.html" class="back-link">Back to Upload</a>
    </div>
</body>
</html>