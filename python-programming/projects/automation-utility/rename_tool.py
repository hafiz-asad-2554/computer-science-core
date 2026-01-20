import os

def bulk_rename():
    folder = "files_to_rename"
    prefix = input("Enter new base name (e.g., 'slide'): ")
    
    if not os.path.exists(folder):
        os.makedirs(folder)
        print(f"Created '{folder}'. Add files there to test.")
        # Create dummy files for testing
        open(f"{folder}/old_name_1.txt", "w").close()
        open(f"{folder}/sad_name.txt", "w").close()
    
    files = os.listdir(folder)
    
    for i, filename in enumerate(files):
        ext = filename.split(".")[-1]
        new_name = f"{prefix}_{i+1}.{ext}"
        
        src = f"{folder}/{filename}"
        dst = f"{folder}/{new_name}"
        
        os.rename(src, dst)
        print(f"Renamed {src} -> {dst}")

if __name__ == "__main__":
    bulk_rename()
