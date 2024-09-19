select * from employees;

select * from employees where comission_pct is not null;

select * from employees where comission_pct is null;

select * from employees order by salary;

select * from employees order by salary asc;

select * from employees order by salary desc;

select * from employees order by salary limit 5;

select * from employees order by salary desc limit 5;

select * from employees limit 5 offset 15;

select * from employees order by salary limit 3 offset 5;

select * from employees;

select * from employees where first_name like '%e_';

select * from employees where first_name like '%ee%';

select * from employees where first_name like '%e%e%';

select * from employees where department_id in (90,60,50);

select * from employees where department_id not in (90,60,50);

select * from employees;

select * from employees where (department_id,manager_id) in ((90,100),(60,102));

select * from employees where (department_id,manager_id) not in ((90,100),(60,102));

select * from employees;

select min(salary) from employees;

select max(salary) from employees;

select sum(salary) from employees;

select avg(salary) from employees;

select count(salary) from employees;

select count(comission_pct) from employees;

select count(manager_id) from employees;

select * from employees;

select department_id,count(*) from employees where department_id = 90 group by department_id;

select department_id,count(*) from employees group by department_id;

select department_id,max(salary) from employees group by department_id;

select department_id,min(salary) from employees group by department_id;

select department_id,sum(salary) from employees group by department_id;

select department_id,max(salary) from employees group by department_id having max(salary)>10000 order by 2;

select department_id,max(salary) from employees group by department_id having max(salary)>10000 order by 2 desc;