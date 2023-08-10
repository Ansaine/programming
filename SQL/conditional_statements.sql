/* Conditional Statements */

/* CASE */

select 

    case 
        when <condition1> then <result1>
        when <condition2> then <result2>
        when <condition3> then <result3>
        else <default_result>
    end

from table_name


/*Type of trianlges  - Here we output a string*/

select 
    case
        when (a=b and b=c and c=a) then "Equilateral" 
        when (a=b and a+b>c) or(b=c and b+c>a) or (c=a and c+a>b) then "Isosceles"
        when a<>b and b<>a and c<>a and a+b>c and b+c>a and c+a>b then "Scalene"
        else 'Not A Triangle' 
    end 
from triangles