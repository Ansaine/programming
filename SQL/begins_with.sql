
/*Weather observation station 6 */

/* we can use NOT LIKE to expclude */
select distinct city from station
where 
city like 'a%' or
city like 'e%' or
city like 'i%' or 
city like 'o%' or
city like 'u%'


/*Another method according to gfg but not working in hackerrank*/
select city from station
where 
city like '[a,e,,i,o,u]%'

/*Weather observation station 8 */
select city from station 
where
city regexp '^[aeiou]' and city regexp  '[aeiou]$'

/*Weather observation station 9 */
/* RLIKE - similar to REGEXP */
select distinct city from station
where
city not rlike '^[aeiou]'
