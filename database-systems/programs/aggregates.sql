-- Count total students
SELECT COUNT(*)
FROM Students;
-- Average CGPA of CS Department
SELECT AVG(CGPA)
FROM Students
WHERE Department = 'CS';
-- Max CGPA
SELECT MAX(CGPA)
FROM Students;