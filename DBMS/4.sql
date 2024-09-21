create table users
(
user_id int primary key,
name varchar(45) not null,
age int not null
);

insert into users values (101,'Rohan',25);
insert into users values (102,'Rahul',20);
insert into users values (103,'Het',15);
insert into users values (104,'Sakshi',18);
insert into users values (105,'Megha',35);

select * from users;

create table orders
(
order_id int not null unique,
order_number int not null,
user_id int,
foreign key (user_id) references users(user_id)
);

insert into orders values(1,789654,101);
insert into orders values(2,789655,103);
insert into orders values(3,789656,103);
insert into orders values(4,789657,104);
insert into orders values(5,789653,102);

select * from orders;

select * from users
natural join 
orders;

select users.user_id,users.name,orders.order_id
from users
left join orders on users.user_id = orders.user_id;

select users.user_id,users.name,orders.order_id
from users
right join orders on users.user_id = orders.user_id;

select * from users
cross join
orders;

select * from users
union
select * from orders;

select * from users
union all
select * from orders;