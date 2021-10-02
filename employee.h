//Define the class object here
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee
{
	public:
	
		//Constructor for the employee class
		Employee()
		{
			name = "";
			idNumber = 0;
			department = "";
			position = "";
		}

		//Mutators
		
		/*
		setInfo member function: Set employee value to provided value
		@param - none
		@return - none
		*/
		void setInfo(std::string, int, std::string, std::string);
		/*
		setDepartment member function: Set employee value to provided value
		@param - none
		@return - none
		*/
		void setDepartment(std::string);
		/*
		setPosition member function: Set employee value to provided value
		@param - none
		@return - none
		*/
		void setPosition(std::string);
		/*
		setName member function: Set employee value to provided value
		@param - none
		@return - none
		*/
		void setName(std::string);
		/*
		setIdNumber member function: Set employee value to provided value
		@param - none
		@return - none
		*/
		void setIdNumber(int);
		
		//Memeber data declaration
		std::string name, department, position;
		int idNumber;

};

/*
Purpose: This function prints the relevant employee value passed.
@param - none
@return - none
*/
		void displayEmployee(Employee);


#endif
