## Direct Download Link for MySQL Community Server - [Click Me](https://cdn.mysql.com//Downloads/MySQLInstaller/mysql-installer-community-8.0.29.0.msi)

---

* What is SQL ?
    > SQL stands for Structured Query Language, SQL is a domain-specific language used in programming and designed for managing data held in a **RDBMS (Relational Database Management System)**
    > * To create database we have a lots of database management system, e.g. MySQL, SQL++, MS-Access, MongoDB, etc.

* What is RDBMS ?
    > The software used to store, manage, query, and retrieve data stored in a relational database is called a **RDBMS (Relational Database Management System)**. The **RDBMS** provides an interface between users and applications and the database, as well as administrative functions for managing data storage, access, and performance.
    > * RDBMS stores data in the form of rows and columns.

* What is DBMS
    > A database Management System (or **DBMS**) is essentially nothing more than a computerized data-keeping system. Users of the system are given facilities to perform several kinds of operations on such a system for either manipulation of the data in the database or the management of the database structure itself.
    > * DBMS Provides a IDE for Manage Database
    > * DBMS is used to store, retrieve and manipulate the data.
    > * There are mainly 4 types of DBMS
    >    1. **Relational database.**
    >    2. Object oriented database.
    >    3. Hierarchical database.
    >    4. Network database

* How many types of Datatypes in SQL
    1. Integer (Roll_No, Contact)
    2. Char/Varchar (Name, Father_Name, Address)
    3. Date (DOB)
    4. Integer/Decimal (Fee)

* Contraints in SQL
    > Constraints are the set of rules which are imposed on a table/attributes.
    > There are following types of Constraints:
    > 1. Primary Key : Not Duplicate / Not Blank, its also a combination of primary & NOT NULL key.
    > 2. Unique Key : must contain unique value
    > 3. NOT NULL : must contain any value & blank space not allowd.
    > 4. Default : admin set default value, if user are not provide then default value is consider
    > 5. Check : set condition on feild
    > 6. Foreign Key : if using table have a column that is not primary key, but its is primary in another table that is called it is Foreign key in using table.

1. Create Database in MySQL
```
create database "database_name";
```

2. Goto specific database
```
use "database_name";
```

3. Show databases in MySQL
```
show databases;
```

4. Show tables in database
```
show tables;
```

5. Make table in database
Syntax:
    > create table "table_name"(
    >
    >    variable_name1 data_type key_name,
    >
    >    variable_name2 data_type key_name,
    >
    >    variable_nameN data_type key_name
    >
    > );
```
create table sample(variableName datatype keyName);
```

6. Show description of table (structure of table)
```
desc "table_name";
```

7. Show all data on table
```
select * from "table_name";
```

8. Insert data in table (always insert in table creating order data), char & varchar data is string that prefix and postfix ( " ) doublequotes.
Query OK, 1 row affected (0.01 sec)
```
insert into table_name" value(data1, data2, ..., dataN);
```

9. To create a DEFAULT constraint on the column when the table is already created
```
ALTER TABLE "table_Name"
ALTER "table_Name" SET DEFAULT "default_value";
```

10. Show particular data on table
```
select "column_name1,column_name2,...,column_nameN" from "table_name";
```

11. Set Condition on feild (column), where are represent condition
```
select * from "table_name" where "condition";
```

* Example:
* select * from student where student_id <= 105;

12. This clause remove duplicate values from the table, show all data on table & dont show repeated value
```
select distinct ("column_name1, column_name2, ... coulumn_nameN") from "table_name";
```

13. Sort by clause
    * by default order is ascending
    * if use descending order then use (desc) at the end.
Syntax:
```
select * from "table_name" order by "feild_name" "(by deafult aesc/**desc**)";
```

14. between condition
```
select * from "table_name" where "feild_name" between "expression/value" and "expression/value";
```

15. not between
```
select * from "table_name" where "feild_name" not between "expression/value" and "expression/value";
```
16. Membership operator **( In / Not In )**

17. Select column where element start from specific character:
```
select * from "table_name" where "column_name" like 'specific_character%';
```

18. Select column where element start & end from specific character:
```
select * from "table_name" where "column_name" like '%specific_character%';
```
19. How to rename table
```
alter table "old_table_name" rename to "new_table_name";
```

20. Select column where element are not "value":
```
select * from 'table_name' where not "column_name" = 'value';
```