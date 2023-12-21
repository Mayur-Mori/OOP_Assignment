/*
Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.

*/

#include<iostream>
using namespace std;

class Rectangle
{
	float length,breadth;
	
	public:
			void setvalue()	
			{
				cout<<"\n\n Enter the length of the rectangle :";
				cin>>length;
				cout<<"\n\n Enter the breadth of the rectangle :";
				cin>>breadth;	
			}	
			void area_Perimeter()
			{
					cout<<"\n\n Area of the rectangle = "<<length*breadth;
					cout<<"\n\n Perimeter of the rectangle = "<<2*(length+breadth);
			}
};
main()
{
	Rectangle R;
	R.setvalue();
	cout<<"\n\n**************************************************************************************";
	R.area_Perimeter();
}
