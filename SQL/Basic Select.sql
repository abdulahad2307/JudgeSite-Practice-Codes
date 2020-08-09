## Revising the Select Query I:
Query all columns for all American cities in the CITY table with populations larger than 100000. The CountryCode for America is USA.

SELECT *
FROM CITY
WHERE POPULATION > 100000 
AND COUNTRYCODE = 'USA';

## Revising the Select Query II: 
Query the NAME field for all American cities in the CITY table with populations larger than 120000. The CountryCode for America is USA.

SELECT NAME
FROM CITY
WHERE POPULATION > 120000 
AND COUNTRYCODE = 'USA';

## Select All:
Query all columns (attributes) for every row in the CITY table.

SELECT *
FROM CITY

## Select by ID:
Query all columns for a city in CITY with the ID 1661.

SELECT *
FROM CITY
WHERE ID = 1661

## Japanese Cities' Attributes:
Query all attributes of every Japanese city in the CITY table. The COUNTRYCODE for Japan is JPN.

SELECT *
FROM CITY
WHERE COUNTRYCODE = 'JPN'

## Japanese Cities' Names:
Query the names of all the Japanese cities in the CITY table. The COUNTRYCODE for Japan is JPN.

SELECT NAME
FROM CITY
WHERE COUNTRYCODE = 'JPN';

## Weather Observation Station 1:
Query a list of CITY and STATE from the STATION table.

SELECT CITY,STATE
FROM STATION

## Weather Observation Station 3:
Query a list of CITY names from STATION for cities that have an even ID number. Print the results in any order, but exclude duplicates from the answer.

SELECT DISTINCT CITY
FROM STATION
WHERE MOD(ID, 2) = 0;

## Weather Observation Station 4:
Find the difference between the total number of CITY entries in the table and the number of distinct CITY entries in the table.

SELECT COUNT(CITY) - COUNT(DISTINCT CITY)
FROM STATION

## Weather Observation Station 5:
Query the two cities in STATION with the shortest and longest CITY names, as well as their respective lengths (i.e.: number of characters in the name). If there is more than one smallest or largest city, choose the one that comes first when ordered alphabetically.

SELECT CITY, LENGTH(CITY) AS `length`
    FROM STATION
    WHERE 1
    ORDER BY `length` ASC, CITY ASC
    LIMIT 1
UNION
SELECT CITY, LENGTH(CITY) AS `length`
    FROM STATION
    WHERE 1
    ORDER BY `length` DESC, CITY ASC
    LIMIT 1