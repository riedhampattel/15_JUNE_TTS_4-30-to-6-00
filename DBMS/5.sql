create table student
(
roll int not null unique,
name varchar(45) not null,
maths int not null,
english int not null,
total int
);

select * from student;

create trigger add_data
before insert
on student
for each row
set new.total = new.maths+new.english;

insert into student(roll,name,maths,english) values(101,'Rohan',35,45);
insert into student(roll,name,maths,english) values(102,'Rahul',45,25);
insert into student(roll,name,maths,english) values(103,'Sakshi',48,50);
insert into student(roll,name,maths,english) values(104,'Megha',46,43);
insert into student(roll,name,maths,english) values(105,'Manan',38,23);

select * from student;

create table history1
(
id int not null unique,
name varchar(45) not null
);

select * from history1;

create table history2
(
name varchar(45) not null,
copy_time time not null
);

select * from history2;

create trigger copy_data
after insert
on history1
for each row
insert into history2 values(new.name,curtime());

insert into history1 values (101,'Rohan');
insert into history1 values (102,'Rahul');
insert into history1 values (103,'Sakshi');
insert into history1 values (104,'Hemakshi');
insert into history1 values (105,'Adarsh');

select * from history1;

select * from history2;