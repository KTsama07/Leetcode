CREATE OR REPLACE FUNCTION NthHighestSalary(N INT) RETURNS TABLE (Salary INT) AS $$
BEGIN
    if N <= 0 then
        return query select NULL::INT;
        return;
        end if;
  RETURN QUERY (
    -- Write your PostgreSQL query statement below.
    SELECT DISTINCT e.salary FROM Employee AS e
    ORDER BY salary DESC 
    LIMIT 1 OFFSET N-1
      
  );
END;
$$ LANGUAGE plpgsql;

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/