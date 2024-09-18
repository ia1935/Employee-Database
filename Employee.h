#ifndef H_Employee
#define H_Employee

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	int employeeNumber, location, age;
	string firstName, lastName;
	char gender;
public:
	Employee(int empnum, string fName, string lName, int locate, int yrs, char sex);
	//Constructor that sets class variables to input values
	Employee();
	//Default Constructor to set values to blank or 0
	void setEmployeeNumber(int empnum);
	void setFirstName(string fName);
	void setLastName(string lName);
	void setLocation(int locate);
	void setAge(int yrs);
	void setGender(char sex);
	int getEmployeeNumber();
	string getFirstName();
	string getLastName();
	int getLocation();
	int getAge();
	char getGender();
	void printEmployee() const;
	void readEmployee(int empnum, string fName, string lName, int locate, int yrs, char sex);
	bool operator==(const Employee& obj) const;
	bool operator>=(const Employee& obj) const;
	bool operator>(const Employee& obj) const;
	bool operator<(const Employee& obj) const;
	friend ostream& operator<<(ostream& os, const Employee& employee);
};




#endif