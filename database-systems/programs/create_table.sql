-- Create Database
CREATE DATABASE UniversityDB;
USE UniversityDB;
-- Create Students Table
CREATE TABLE Students (
    StudentID INT PRIMARY KEY AUTO_INCREMENT,
    Name VARCHAR(50) NOT NULL,
    RollNo VARCHAR(20) UNIQUE,
    Department VARCHAR(50),
    CGPA DECIMAL(3, 2)
);
-- Show tables
SHOW TABLES;