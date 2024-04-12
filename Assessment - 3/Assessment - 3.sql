create database Assessment;

create table product(
PRO_ID int primary key,
PRO_NAME text not null,
PRO_PRICE decimal(6,2) not null,
PRO_COM int not null
);

insert into product values
(101,"Mother Board",3200.00,15),
(102,"Key Board",450.00,16),
(103,"ZIP drive",250.00,14),
(104,"Speaker",550.00,16),
(105,"Moniter",5000.00,11),
(106,"DVD Drive",900.00,12),
(107,"CD Drive",800.00,12),
(108,"Printer",2600.00,13),
(109,"Refill Cartridge",350.00,13),
(110,"Mouse",250,12);

select * from product;


-- Q1 
select * from product where PRO_PRICE >= 250
order by PRO_PRICE desc;
select PRO_PRICE,PRO_NAME from product 
order by PRO_NAME asc;

-- Q2
select PRO_PRICE,PRO_NAME from product
where PRO_PRICE = (SELECT min(PRO_PRICE) from product);

-- Q3
select avg(PRO_PRICE),PRO_COM from product
group by PRO_COM;

-- Q4
select avg(PRO_PRICE) from product;