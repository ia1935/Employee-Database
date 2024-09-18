#include "Employee.h"
#include <iostream>

using namespace std;


Employee::Employee()
{
	employeeNumber = 000000;
	firstName = "";
	lastName = "";
	location = 1;
	age = 0;
	gender = 'm';

}
Employee::Employee(int empnum, string fName, string lName, int locate, int yrs, char sex)
{
	employeeNumber = empnum;
	firstName = fName;
	lastName = lName;
	location = locate;
	age = yrs;
	gender = sex;
}
void Employee::setEmployeeNumber(int empnum)
{
	employeeNumber = empnum;
}
void Employee::setFirstName(string fName)
{
	firstName = fName;
}
void Employee::setLastName(string lName)
{
	lastName = lName;
}
void Employee::setLocation(int locate)
{
	location = locate;
}
void Employee::setAge(int yrs)
{
	age = yrs;
}
void Employee::setGender(char sex)
{
	gender = sex;
}
int Employee::getEmployeeNumber()
{
	return employeeNumber;
}
string Employee::getFirstName()
{
	return firstName;
}
string Employee::getLastName()
{
	return lastName;
}int Employee::getLocation()
{
	return location;
}
int Employee::getAge()
{
	return age;
}
char Employee::getGender()
{
	return gender;
}
void Employee::printEmployee() const
{
	cout << "Employee Number: " << employeeNumber << endl;
	cout << "Name: " << firstName << " " << lastName<<endl;
	if (location == 1)
	{
		cout << "Location: National" << endl;
	}
	else if (location == 2)
	{
		cout << "Location: Americas" << endl;
	}
	else if (location == 3)
	{
		cout << "Location: Europe" << endl;
	}
	else if (location == 4)
	{
		cout << "Location: Pacific" << endl;
	}
	cout << "Age: " << age << endl;
	cout << "Gender: " << gender << endl;
}
void Employee::readEmployee(int empnum, string fName, string lName, int locate, int yrs, char sex)
{
	employeeNumber = empnum;
	firstName = fName;
	lastName = lName;
	location = locate;
	age = yrs;
	gender = sex;
}
bool Employee::operator==(const Employee& obj) const
{
	return ((employeeNumber == obj.employeeNumber)&& (firstName == obj.firstName) && (lastName == obj.lastName) && 
		(location == obj.location) && (age == obj.age) && (gender == obj.gender));
}
bool Employee::operator>=(const Employee& obj)const
{
	return (employeeNumber >= obj.employeeNumber);
}
bool Employee::operator<(const Employee& obj) const
{
	return (employeeNumber < obj.employeeNumber);
}
bool Employee::operator>(const Employee& obj)const
{
	return (employeeNumber > obj.employeeNumber);
}
ostream& operator<<(ostream& os, const Employee& employee)
{
	os << "Name: " << employee.firstName << " " << employee.lastName << endl
		<< "Age: " << employee.age << endl << "ID: " << employee.employeeNumber << endl
		<< "Gender: " << employee.gender << endl << "Location: " << employee.location << endl;


	return os;
}
