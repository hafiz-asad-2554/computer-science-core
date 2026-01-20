-- Create Index on RollNo for faster search
CREATE INDEX idx_rollno ON Students(RollNo);
-- Create Composite Index
CREATE INDEX idx_name_dept ON Students(Name, Department);