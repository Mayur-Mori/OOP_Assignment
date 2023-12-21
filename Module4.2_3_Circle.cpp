/*Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference
*/

#include<iostream>
using namespace std;

class Circle
{
	float radius;
	
	public:
			void setvalue()	
			{
				cout<<"\n\n Enter the radius of the circle :";
				cin>>radius;	
			}	
			void area_Circumference()
			{
					cout<<"\n\n Area of the circle = "<<3.14*radius*radius;
					cout<<"\n\n Circumference of the circle = "<<2*3.14*radius;
			}
};
main()
{
	Circle A;
	A.setvalue();
	A.area_Circumference();
}
