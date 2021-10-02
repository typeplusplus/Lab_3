// This program demonstrates how to use an array of strucures
#include <iostream>
#include <string>

#include "employee.h"
#include "printmefirst.h"

using namespace std;

/*
Purpose: This program will create class objects for each employee
* and then the employee information will be printed.
* 
@param - none
@return - 0
*/


int main()
{
	printmefirst("Reece Doyle", "CS-116: Lab 3 - Employee");

//Create an Employee object to test constructor #1.
	Employee Susan;
	Susan.setInfo("Susan Meyers", 47899, "Accounting", "Vice President");
	
//Create an Employee object to test constructor #2.	
	Employee Mark;
	Mark.setInfo("Mark Jones", 39119, "Dept", "Title");
	Mark.setDepartment("IT");
	Mark.setPosition("Programmer");
	
//Create an Employee object to test constructor #3.
	Employee Joy;
	Joy.setName("Joy Rogers");
	Joy.setIdNumber(81774);
	Joy.setDepartment("Manufacturing");
	Joy.setPosition("Engineer");

//Display each employee's data
	displayEmployee(Susan);
	displayEmployee(Mark);
	displayEmployee(Joy);

return 0;
}
