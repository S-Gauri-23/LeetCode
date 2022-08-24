# Write your MySQL query statement below
select distinct a.email as 'Email'
from 
    Person as a
    join Person as b
on 
    a.email = b.email
where 
    a.id <> b.id;
