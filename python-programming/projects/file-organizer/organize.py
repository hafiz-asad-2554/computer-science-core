import os
import shutil

# Change this path to test!
DIRECTORY = "test_folder" 

EXTENSIONS = {
    "Images": [".jpg", ".png", ".jpeg", ".gif"],
    "Documents": [".pdf", ".docx", ".txt"],
    "Code": [".py", ".java", ".cpp", ".js"],
    "Archives": [".zip", ".rar"]
}

def organize():
    if not os.path.exists(DIRECTORY):
        os.makedirs(DIRECTORY) # Create if doesn't exist for safety
        print(f"Created {DIRECTORY}. Put some files in it to test.")
        return

    for filename in os.listdir(DIRECTORY):
        file_path = os.path.join(DIRECTORY, filename)
        
        if os.path.isdir(file_path):
            continue

        moved = False
        for folder, exts in EXTENSIONS.items():
            if any(filename.lower().endswith(ext) for ext in exts):
                folder_path = os.path.join(DIRECTORY, folder)
                if not os.path.exists(folder_path):
                    os.makedirs(folder_path)
                
                shutil.move(file_path, os.path.join(folder_path, filename))
                print(f"Moved {filename} to {folder}")
                moved = True
                break
        
        if not moved:
             # Move 'other' files to 'Others'
             folder_path = os.path.join(DIRECTORY, "Others")
             if not os.path.exists(folder_path):
                 os.makedirs(folder_path)
             shutil.move(file_path, os.path.join(folder_path, filename))
             print(f"Moved {filename} to Others")

if __name__ == "__main__":
    organize()
