/*
Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.

*/

#include<iostream>
using namespace std;

class Person
{
	string name,country;
	int age;
	
	public:
			void setvalue()	
			{
				cout<<"\n\n Enter the Name of the Person :";
				cin>>name;
				cout<<"\n\n Enter the Age of the Person :";
				cin>>age;	
				cout<<"\n\n Enter the Country of the Person :";
				cin>>country;
			}	
			void display()
			{
					cout<<"\n\n Person's Name : "<<name;
					cout<<"\n\n Person's Name : "<<age;
					cout<<"\n\n Person's Country : "<<country;
			}
};
main()
{
	Person P;
	P.setvalue();
	cout<<"\n\n**************************************************************************************";
	P.display();
}
