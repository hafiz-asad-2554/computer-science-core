-- Create a log table
CREATE TABLE StudentLog (
    LogID INT PRIMARY KEY AUTO_INCREMENT,
    Message VARCHAR(255),
    LogTime TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
DELIMITER // -- Trigger on Insert
CREATE TRIGGER AfterStudentDelete
AFTER DELETE ON Students FOR EACH ROW BEGIN
INSERT INTO StudentLog (Message)
VALUES (CONCAT('Student Deleted: ', OLD.Name));
END // DELIMITER;