//WAP to create simple calculator using class


#include<iostream>
using namespace std;

class math
{
		float n1,n2;
		
		public:
		 		void getdata(float x , float y )
				{
					n1=x;
					n2=y;
		    	}	
		    	inline float sum()//one liner function
		    	{
		    		return n1+n2;
				}
				inline float sub()
		    	{
		    		return n1-n2;
				}
				inline float mul()
		    	{
		    		return n1*n2;
				}
				inline float div()
		    	{
		    		return n1/n2;
				}	
};

main()
{
	math M;
	float sum,sub,mul,div;
	float num1,num2;
	cout<<"\n\n Enter the num1 :";
	cin>>num1;
	cout<<"\n\n Enter the num2 :";
	cin>>num2;
	M.getdata(num1,num2);
	
	sum=M.sum();
	cout<<"\n\n Sum = "<<sum;
	sub=M.sub();
	cout<<"\n\n Sub = "<<sub;
	mul=M.mul();
	cout<<"\n\n Mul = "<<mul;
	div=M.div();
	cout<<"\n\n Div = "<<div;

}














