-- Create Courses Table
CREATE TABLE Courses (
    CourseID INT PRIMARY KEY,
    Title VARCHAR(100),
    Credits INT
);
-- Create Enrollments Table
CREATE TABLE Enrollments (
    EnrollmentID INT PRIMARY KEY,
    StudentID INT,
    CourseID INT,
    FOREIGN KEY (StudentID) REFERENCES Students(StudentID),
    FOREIGN KEY (CourseID) REFERENCES Courses(CourseID)
);
-- Inner Join (Get Student Names and their Courses)
SELECT s.Name,
    c.Title
FROM Students s
    INNER JOIN Enrollments e ON s.StudentID = e.StudentID
    INNER JOIN Courses c ON e.CourseID = c.CourseID;
-- Left Join (All students even if they took no course)
SELECT s.Name,
    c.Title
FROM Students s
    LEFT JOIN Enrollments e ON s.StudentID = e.StudentID
    LEFT JOIN Courses c ON e.CourseID = c.CourseID;