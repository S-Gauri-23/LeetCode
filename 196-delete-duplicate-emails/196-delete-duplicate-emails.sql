# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
delete a from Person as a, Person as b
where a.email = b.email and a.id > b.id;

#p1.Id > p2.Id is so that p1 is only compared to p2 whose id is smaller than the id of p1, if this does not exist then p1 will be compared to all data, causing p1 to be empty.