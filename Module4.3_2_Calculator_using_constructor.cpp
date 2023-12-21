/*
Write a program of Addition, Subtraction, Division, Multiplication using
constructor.
*/

#include<iostream>
using namespace std;

class calculator
{	
	float n1,n2;
	public:		
	
			calculator()
			{
				cout<<"\n\n Enter the number 1 :";
				cin>>n1;
				cout<<"\n\n Enter the number 2 :";
				cin>>n2;
			}
			void display()
			{
				cout<<"\n\n Addition of two number = "<<n1+n2;
				cout<<"\n\n Subtraction of two number = "<<n1-n2;
				cout<<"\n\n Multiplication of two number = "<<n1*n2;
				cout<<"\n\n Division of two number = "<<n1/n2;
			}
};
main()
{
	calculator C;
	C.display();
	
}
