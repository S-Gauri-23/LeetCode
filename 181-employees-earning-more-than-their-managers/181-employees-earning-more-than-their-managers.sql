# Write your MySQL query statement below
select 
    a.Name as 'Employee'
from Employee as a, 
     Employee as b
where 
     a.Managerid = b.Id 
and 
a.Salary > b.Salary;