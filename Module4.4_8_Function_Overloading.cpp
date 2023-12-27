/*
Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/
#include<iostream>
using namespace std;

class maths
{
  int a ,b,res=0;
  public:
  		maths(int x,int y)
		  {
		  	a=x;
		  	b=y;
			  }	
			 int sum()
			{
   			 res=a+b;
   			 return(res);
			}

			int	sub()
			{
 			   res=a-b;
				return(res);
			}
		
			int	mul()
			{	
   			 res=a*b;
 			  return(res);
			}
};
main()
{
    int x,y,m,su,s;
    cout<<"\nEnter 1st number :: ";
    cin>>x;
    cout<<"\nEnter 2nd number :: ";
    cin>>y;
    
    maths OP(x,y);

    s=OP.sum();
    su=OP.sub();
    m=OP.mul();

    cout<<"\nAddition of two Numbers [ "<<x<<" + "<<y<<" ] = "<<s<<"\n";
    cout<<"\nSubtraction of two Numbers [ "<<x<<" - "<<y<<" ] = "<<su<<"\n";
    cout<<"\nMultiplication of two Numbers [ "<<x<<" * "<<y<<" ] = "<<m<<"\n";


}


