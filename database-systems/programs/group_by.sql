-- Count students per department
SELECT Department,
    COUNT(*) as TotalStudents
FROM Students
GROUP BY Department;
-- Show departments with more than 10 students
SELECT Department,
    COUNT(*) as TotalStudents
FROM Students
GROUP BY Department
HAVING COUNT(*) > 10;