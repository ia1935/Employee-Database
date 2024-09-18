//Imran Ahmed
//Project 1

#include <iostream>

#include "doublyLinkedList.h"
#include "Employee.h"
using namespace std;


int main()
{
	int prog_run = 1, user_input=1,empid=0,worker_location=0,worker_age=0,choice5_input=0;
	string first_name="", last_name = "";
	char worker_gender = 'm';
	Employee empobj;
	doublyLinkedList<Employee> obj;

	while (prog_run == 1)
	{
		cout << "Please enter a number corresponding to the menu choices:"<<endl;
		cout << "1. Enter Employee Data: " << endl;
		cout << "2. Delete Employee Data: " << endl;
		cout << "3. Print Employee Information by Gender: " << endl;
		cout << "4. Search for Employee: " << endl;
		cout << "5. Print All Employees" << endl;
		cout << "6. Display Number of Employees:" << endl;
		cout << "7. Exit." << endl;
		cin >> user_input;
		if (user_input == 1)
		{
			cout << "Please enter the six-digit Employee ID: ";
			cin >> empid;
			if ((empid > 999999) || (empid < 100000))
			{
				cout << "The ID you have entered is not valid. Please try again: ";
				cin >> empid;
			}
			cout << "Please enter the First and Last Name of the Employee: ";
			cin >> first_name >> last_name;
			cout << "Please enter the number of the employee's location using the following menu: " << endl;
			cout << "1. National" << endl;
			cout << "2. Americas" << endl;
			cout << "3. Europe" << endl;
			cout << "4. Pacific" << endl;
			cin >> worker_location;
			cout << "Please enter the employee's age: ";
			cin >> worker_age;
			cout << "Please enter the employee's sex, indicating male with m, and female for f: ";
			cin >> worker_gender;
			empobj.readEmployee(empid, first_name, last_name, worker_location, worker_age, worker_gender);
			obj.insert(empobj);
		}
		if (user_input == 2)
		{
			cout << "Please enter the employee number you wish to delete: ";
			cin >> empid;
			if (empobj.getEmployeeNumber() == empid)
			{
				obj.deleteNode(empobj);
			}
			else
			{
				cout << "This value does not exist. Returning to Menu." << endl;
			}
		}
		if (user_input == 3)
		{
			cout << "Please enter the gender you would like to print by using m or f: ";
			cin >> worker_gender;
			obj.printByGender(worker_gender);
		}
		if (user_input == 4)
		{
			cout << "Please enter the employee number you would like to search for: ";
			cin >> empid;
			if (empid == empobj.getEmployeeNumber())
			{
				obj.search(empobj);
			}
		}
		if (user_input == 5)
		{
			cout << "Indicate if you want to print employees in descending or ascending order, with 1 as descending, and 2 as ascending: ";
			cin >> choice5_input;
			if (choice5_input == 1)
			{
				obj.reversePrint();
			}
			else
			{
				obj.print();
			}

		}
		if (user_input == 6)
		{
			cout << "Now printing total of employees: " << endl;
			obj.length();
		}
		if (user_input == 7)
		{
			prog_run = 2;
		}



	}


	return 0;
}