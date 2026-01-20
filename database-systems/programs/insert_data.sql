-- Inserting records
INSERT INTO Students (Name, RollNo, Department, CGPA)
VALUES ('Ali Khan', 'BSCS-21-001', 'CS', 3.5),
    ('Sara Ahmed', 'BSCS-21-002', 'CS', 3.8),
    ('John Doe', 'BBA-21-010', 'BBA', 2.9),
    ('Fatima', 'BSE-21-005', 'SE', 3.2);
-- Verify insertion
SELECT *
FROM Students;