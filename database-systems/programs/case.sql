SELECT Name,
    CGPA,
    CASE
        WHEN CGPA >= 3.5 THEN 'Excellent'
        WHEN CGPA >= 3.0 THEN 'Good'
        ELSE 'Needs Improvement'
    END AS Performance
FROM Students;