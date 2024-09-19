create table demo
(
id int not null unique,
name varchar(45) not null
);

insert into demo values(101,'Rahul');
insert into demo values(102,'Mehul');
insert into demo values(103,'Setul');
insert into demo values(104,'Sakshi');
insert into demo values(105,'Hemakshi');

commit;

select * from demo;

rollback;

select * from demo;

delete from demo where id = 101;
delete from demo where id = 103;
delete from demo where id = 105;

select * from demo;

rollback;

select * from demo;

delete from demo where id = 101;
delete from demo where id = 103;
delete from demo where id = 105;

select * from demo;

commit;

rollback;

select * from demo;

insert into demo values(101,'Rahul');
insert into demo values(103,'Setul');
insert into demo values(105,'Hemakshi');

commit;

select * from demo;

savepoint s1;
delete from demo where id = 101;
savepoint s2;
delete from demo where id = 102;
savepoint s3;
delete from demo where id = 103;

select * from demo;

rollback;

select * from demo;

savepoint s1;
delete from demo where id = 101;
savepoint s2;
delete from demo where id = 102;
savepoint s3;
delete from demo where id = 103;

select * from demo;

rollback to s2;

select * from demo;