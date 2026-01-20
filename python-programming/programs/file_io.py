# Write
with open("test.txt", "w") as f:
    f.write("Hello from Python!\n")
    f.write("File handling is easier here.")

# Read
with open("test.txt", "r") as f:
    content = f.read()
    print("File Content:\n" + content)
