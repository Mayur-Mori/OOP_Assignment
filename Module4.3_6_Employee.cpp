/*
Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor
*/

#include<iostream>
using namespace std;
class Employee 
{
    string name;
    int emp_id;
    double salary;

	public:
	    Employee(string empname, int empid, double sal) 
		{
	        name = empname;
	        emp_id = empid;
	        salary = sal;
	    }
	
    void getData() 
	{
        cout<<"\n\n Employee Name : "<<name;
        cout<<"\n\n Employee id : "<<emp_id;
        cout<<"\n\n salary : "<<salary;
    }
};

main() 

{
    Employee E1("Mayur", 7 ,70000);
	E1.getData();  
	  
}
