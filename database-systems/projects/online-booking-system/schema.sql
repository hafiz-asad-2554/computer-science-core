CREATE DATABASE BookingDB;
USE BookingDB;
CREATE TABLE Users (
    UserID INT PRIMARY KEY,
    Name VARCHAR(100),
    Email VARCHAR(100)
);
CREATE TABLE Movies (
    MovieID INT PRIMARY KEY,
    Title VARCHAR(100),
    Genre VARCHAR(50)
);
CREATE TABLE Theaters (
    TheaterID INT PRIMARY KEY,
    Name VARCHAR(100),
    Location VARCHAR(100)
);
CREATE TABLE Shows (
    ShowID INT PRIMARY KEY,
    MovieID INT,
    TheaterID INT,
    ShowTime DATETIME,
    FOREIGN KEY (MovieID) REFERENCES Movies(MovieID),
    FOREIGN KEY (TheaterID) REFERENCES Theaters(TheaterID)
);
CREATE TABLE Bookings (
    BookingID INT PRIMARY KEY,
    UserID INT,
    ShowID INT,
    Seats INT,
    FOREIGN KEY (UserID) REFERENCES Users(UserID),
    FOREIGN KEY (ShowID) REFERENCES Shows(ShowID)
);