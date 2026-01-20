-- Create a new user
CREATE USER 'lab_user' @'localhost' IDENTIFIED BY 'password123';
-- Grant SELECT permission only
GRANT SELECT ON UniversityDB.* TO 'lab_user' @'localhost';
-- Revoke permission
REVOKE
SELECT ON UniversityDB.*
FROM 'lab_user' @'localhost';
-- Drop user
DROP USER 'lab_user' @'localhost';