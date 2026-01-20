START TRANSACTION;
UPDATE Students
SET CGPA = 4.0
WHERE Name = 'Ali';
DELETE FROM Students
WHERE Name = 'John Doe';
-- If everything is fine
COMMIT;
-- If something goes wrong
-- ROLLBACK;