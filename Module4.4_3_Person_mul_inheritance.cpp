/*
Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)

*/
#include<iostream>
using namespace std;

class Person{ 
	
	public:
		
	string name;
	int age;
	
	public:
		
		void getdata()
		{
			
		cout<<"\nEnter Your Name : ";
		cin>>name;
		
		cout<<"\nEnter Your Age : ";
		cin>>age;
		
		}
	
};

class Student : public Person{ 

	public: 
	
	float percentage;
	
	public:
	
	void result(){
		cout<<"\nEnter your Percentage : ";
		cin>>percentage;
	}
};

class Teacher : public Student{  
	
	float salary;
	
	public:
		
	
	void Teacher_info()
	{
		getdata();
		result();
		
		cout<<"\nEnter your monthly income : ";
		cin>> salary;	
		
	}	
		
								
	void display()
	{
		cout<<"\n--------------------Dispay Information--------------------\n";
		cout<<"\nName : "<<name;
		cout<<"\nAge : "<<age;
		cout<<"\nPercentage : "<<percentage<<" %";
		cout<<"\nSalary : "<<salary;	
	}
	
};

main(){
	
	Teacher t1; 
	
	
	t1.Teacher_info(); 
	t1.display();
}
