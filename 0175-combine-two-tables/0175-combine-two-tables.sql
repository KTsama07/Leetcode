-- Write your PostgreSQL query statement below
SELECT p.firstName, p.lastName , a.city , a.state FROM Person AS p
LEFT Join Address AS a
 ON p.personID = a.personID;


/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/