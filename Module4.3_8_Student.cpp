/*  Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation  */

#include<iostream>
using namespace std;

class Student
{
	string name, class_name;
	int roll_no ,marks;
	
	public:
		
		void get_info() 
		{
			cout<<"\nEnter Student's name : ";
			cin>>name;
			cout<<"\nEnter Student's roll no : ";
			cin>>roll_no;
			cout<<"\nEnter Student's class name: ";
			cin>>class_name;
			cout<<"\nEnter Student's marks: ";
			cin>>marks;
		}
		
		void display_info() 
		{
			cout<<"\nName : "<<name;
			cout<<"\nRoll no : "<<roll_no;
			cout<<"\nClass name: "<<class_name;
			cout<<"\nMarks: "<<marks;
		}
		
		
		void grade() 
		{
			if (marks >= 90) {
     			cout<<"\nYour Marks = ["<<marks<<"] and grade is = A+";
    			} 
			else if (marks >= 80) {
      			cout<<"\nYour Marks = ["<<marks<<"]  grade is = A";
			} 
			else if (marks >= 70) {
      			cout<<"\nYour Marks = ["<<marks<<"]  grade is = B+";
    		} 		
			else if (marks >= 60) {
      			cout<<"\nYour Marks = ["<<marks<<"]  grade is = B";
    		}  		
			else if (marks >= 60){
      			cout<<"\nYour Marks = ["<<marks<<"]  grade is = C+";
    		}
			else if (marks >= 50){
      			cout<<"\nYour Marks = ["<<marks<<"]  grade is = C";
    		}	
    		else {
      			cout<<"\nYour Marks = ["<<marks<<"]  grade is = F";
    		}	
		}
};

main(){
	
	
	Student s1; 
	
	cout<<"\n**********************************************\n";
	s1.get_info();
	cout<<"\n**********************************************\n";
	s1.display_info();
	s1.grade();
	
}
