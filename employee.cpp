//Define and constructors here

#include <iostream>
#include <string>

#include "employee.h"

using namespace std;

//Set employee info
void Employee::setInfo(string n, int ID, string dep, string pos)
{
	name = n;
	idNumber = ID;
	department = dep;
	position = pos;
}

//Set employee name
void Employee::setName(string n)
{
	name = n;
}

//Set employee ID
void Employee::setIdNumber(int ID)
{
	idNumber = ID;
}

//Set employee department
void Employee::setDepartment(string dep)
{
	department = dep;
}

//Set employee position
void Employee::setPosition(string pos)
{
	position = pos;
}

//Print employee information
void displayEmployee(Employee user)
{
	cout << "\nEmployee Info" << endl 
		 << "Name: " << user.name << endl
		 << "Id Number: " << user.idNumber << endl
		 << "Department: " << user.department << endl
		 << "Position: " << user.position << endl;
}
