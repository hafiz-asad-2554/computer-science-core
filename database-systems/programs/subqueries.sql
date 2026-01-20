-- Find students with CGPA higher than average
SELECT Name,
    CGPA
FROM Students
WHERE CGPA > (
        SELECT AVG(CGPA)
        FROM Students
    );
-- Find courses taken by 'Ali'
SELECT Title
FROM Courses
WHERE CourseID IN (
        SELECT CourseID
        FROM Enrollments
        WHERE StudentID = (
                SELECT StudentID
                FROM Students
                WHERE Name = 'Ali'
            )
    );