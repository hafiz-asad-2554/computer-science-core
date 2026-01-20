DELIMITER // CREATE PROCEDURE GetStudentByDept(IN deptName VARCHAR(50)) BEGIN
SELECT *
FROM Students
WHERE Department = deptName;
END // DELIMITER;
-- Call
CALL GetStudentByDept('CS');