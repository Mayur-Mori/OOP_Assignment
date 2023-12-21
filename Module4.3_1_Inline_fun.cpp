/*
Write a program to find the multiplication values and the cubic values using
inline function

*/
#include<iostream>
using namespace std;


class math
{
		int n;
		
		public:
		 		void getdata(int num1)
				{
					n=num1;
					
		    	}	
		    	inline int square()//one liner function
		    	{
		    		return n*n;
				}
				inline int cube()
		    	{
		    		return n*n*n;
				}
					
};

main()
{
	math M;
	int s,c,num1;
	cout<<"\n\n Enter the num1 :";
	cin>>num1;
	M.getdata(num1);
	
	s=M.square();
	cout<<"\n\n Square = "<<s;
	c=M.cube();
	cout<<"\n\n Cube = "<<c;
	
	
}
