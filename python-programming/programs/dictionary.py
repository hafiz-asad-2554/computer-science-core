student = {
    "name": "John",
    "age": 21,
    "course": "CS"
}

print(student)
print(f"Name: {student['name']}")

student["grade"] = "A"
print("After update:", student)

for k, v in student.items():
    print(f"{k}: {v}")
