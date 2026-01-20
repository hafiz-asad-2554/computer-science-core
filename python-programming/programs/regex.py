import re

txt = "The rain in Spain"
x = re.search("^The.*Spain$", txt)

if x:
    print("YES! We have a match!")
else:
    print("No match")

emails = "test@example.com, hello@world.org"
found = re.findall(r'[\w\.-]+@[\w\.-]+', emails)
print("Found emails:", found)
