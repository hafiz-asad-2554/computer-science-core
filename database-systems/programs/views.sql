-- Create a View for Toppers
CREATE VIEW Toppers AS
SELECT Name,
    Department,
    CGPA
FROM Students
WHERE CGPA >= 3.7;
-- Select from View
SELECT *
FROM Toppers;