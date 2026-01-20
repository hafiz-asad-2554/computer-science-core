<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Upload Result</title>
    <style>
        body { font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; background-color: #f4f4f9; display: flex; justify-content: center; align-items: center; min-height: 100vh; margin: 0; padding: 20px; box-sizing: border-box; }
        .container { background: white; padding: 2rem; border-radius: 8px; box-shadow: 0 4px 6px rgba(0,0,0,0.1); width: 100%; max-width: 500px; text-align: center; }
        h2 { margin-bottom: 1.5rem; }
        .success { color: #28a745; }
        .error { color: #dc3545; }
        .image-preview { max-width: 100%; height: auto; border-radius: 4px; margin-top: 1rem; border: 1px solid #ddd; padding: 5px; }
        .back-link { display: inline-block; margin-top: 1.5rem; color: #007bff; text-decoration: none; }
        .back-link:hover { text-decoration: underline; }
        .error-box { background-color: #f8d7da; color: #721c24; padding: 1rem; border-radius: 4px; border: 1px solid #f5c6cb; text-align: left; }
    </style>
</head>
<body>
    <div class="container">
        <?php
        if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_FILES["image"])) {
            $file = $_FILES["image"];
            $fileName = $file["name"];
            $fileType = $file["type"];
            $fileTmpName = $file["tmp_name"];
            $fileError = $file["error"];
            $fileSize = $file["size"];

            $allowedTypes = ['image/jpeg', 'image/jpg', 'image/png'];
            $maxSize = 2 * 1024 * 1024; // 2MB

            $errors = [];

            // Check for upload errors
            if ($fileError !== 0) {
                $errors[] = "Error uploading file. Code: $fileError";
            }

            // Check file type
            if (!in_array($fileType, $allowedTypes)) {
                $errors[] = "Invalid file type. Only JPG, JPEG, and PNG are allowed.";
            }

            // Check file size
            if ($fileSize > $maxSize) {
                $errors[] = "File size exceeds 2MB limit.";
            }

            if (empty($errors)) {
                // Read file content and encode to base64 to display without saving
                $imageData = base64_encode(file_get_contents($fileTmpName));
                $src = 'data:' . $fileType . ';base64,' . $imageData;

                echo "<h2 class='success'>Image Uploaded Successfully</h2>";
                echo "<p><strong>File Name:</strong> " . htmlspecialchars($fileName) . "</p>";
                echo "<p><strong>File Size:</strong> " . round($fileSize / 1024, 2) . " KB</p>";
                echo "<img src='$src' alt='Uploaded Image' class='image-preview'>";
            } else {
                echo "<h2 class='error'>Upload Failed</h2>";
                echo "<div class='error-box'>";
                foreach ($errors as $error) {
                    echo "<p>• $error</p>";
                }
                echo "</div>";
            }
        } else {
            echo "<h2>No File Uploaded</h2>";
            echo "<p>Please select an image to upload.</p>";
        }
        ?>
        <br>
        <a href="upload.html" class="back-link">Back to Upload</a>
    </div>
</body>
</html>
