-- Update CGPA
UPDATE Students
SET CGPA = 3.6
WHERE RollNo = 'BSCS-21-001';
-- Delete a student with low CGPA
DELETE FROM Students
WHERE CGPA < 3.0;
SELECT *
FROM Students;