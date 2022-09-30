use nikhil;

create table student(RollNum int primary key,
Name varchar(20),
Branch varchar(50));

insert into student(
rollNum,name,branch)Values(3,"Kriti","EC");


create table examination(RollNum int,
s_code varchar(50),
marks int,
p_code varchar(50),
foreign key(RollNum) references student(rollNum)) ;

insert into examination(rollnum,s_code,marks,p_code)values(3,'EC102',50,'EC');

select * from examination;




