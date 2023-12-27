/*
Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance
*/
#include<iostream> 
using namespace std; 

// Base class 
class A 
{ 
	public: 
		A() 
		{ 
			cout << "Base class A constructor \n"; 
		} 
}; 

// Derived class B 
class B: public A 
{ 
	public: 
		B() 
		{ 
			cout << "Class B constructor \n"; 
		} 
}; 

// Derived class C 
class C: public B 
{ 
	public: 
		C() 
		{ 
			cout << "Class C constructor \n"; 
			
		} 
}; 

// Driver code 
main() 
{ 
	C obj; 
	
}
