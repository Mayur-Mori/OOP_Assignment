/*
Write a C++ Program to show access to Private Public and Protected using
Inheritance
*/
#include<iostream>
using namespace std;

/* Base Class */
class Base
{
    public: 
            int a;
    protected: 
            int b;
    private: 
            int c;
};
/* Some of the Derived classes */
/* First Derived Class - privately inherit the base class 'Base' */
class Derived1:private Base
{
 	
 	public : 
 	
 	void display1()
 	{	
 	cout<<"\n---------------This is from [class Derived1: private Base]---------------\n ";
    cout<<"\na is accessible - private";
    cout<<"\nb is accessible - private";
   	cout<<"\nc is not accessible\n";
	}
    
};
/* Second Derived Class - Publicly inherit the base class 'Base' */
class Derived2: public Base
{
    public : 
    
    
 	void display2()
	{	
	cout<<"\n---------------This is from [class Derived2: public Base]---------------\n ";
    cout<<"\na is accessible - public";
   	cout<<"\nb is accessible - protected";
    cout<<"\nc is not accessible\n";
	}
    
};
/* Third Derived Class - protectedly inherit the base class 'Base' */
class Derived3: protected Base
{
	public : 
	void display3()
	{
	cout<<"\n---------------This is from [class Derived3: protected Base]---------------\n";
    cout<<"\na is accessible - protected";
    cout<<"\nb is accessible - protected";
    cout<<"\nc is not accessible\n";    
	}
};

main()
{
	Derived1 d1;
	Derived2 d2;
	Derived3 d3;
	
	d1.display1();
	d2.display2();
	d3.display3();
	
}
