sum
count 
average
max,min
floor(val)
ceil(val)


/*Population Density Difference HK*/

select 
max(population)- min(population)
from city

/* Decimal Places - here we round upto 2 dcimal places */
select round(sum(salary),2) from station        