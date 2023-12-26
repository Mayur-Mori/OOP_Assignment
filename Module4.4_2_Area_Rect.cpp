/*
Write a C++ Program to find Area of Rectangle using inheritance
*/

#include <iostream>
using namespace std;

class Area{
protected:
   int w,h;
   public:
          void parameters()
          {
          	cout<<"\n\n Enter the width :";
 			cin>>w;
 	
 			cout<<"\n\n Enter the height :";
 			cin>>h;
		  }
};

class rectangle: public Area
{
    public:
    int getarea () 
	{
        return (w*h);
    }
};

 main()
 {
 	int w,h;
 	
    rectangle r;
    r.parameters();
    
    cout <<"\n\n total area: " <<r.getarea() ;
    
}

