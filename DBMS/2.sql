create role admin;

create role emp;

create user 'Rahul' identified by 'abc@123' default role admin;

create user 'Manish' identified by 'abcd@1234' default role emp;

grant select on employees to Rahul;

revoke select on employees from Rahul;

grant select on employees to Rahul;

grant insert,delete,select on employees to Rahul;

grant update on employees to Manish;

grant select on employees to Manish;