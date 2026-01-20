import json

# Some JSON
x =  '{ "name":"John", "age":30, "city":"New York"}'

# Parse
y = json.loads(x)
print(y["age"])

# Convert back
z = json.dumps(y)
print(z)
