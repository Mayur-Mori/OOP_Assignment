/*
Write a C++ Program to find Area of Rectangle using inheritance
*/

#include <iostream>
using namespace std;

class Area{
protected:
   int width;
   int height;
   public:
          Area(int w,int h)
          {
          	width=w;
          	height=h;
		  }
};

class rectangle: public Area
{
    public:
    int getarea () 
	{
        return (width*height);
    }
};

 main()
 {
 	int w,h;
 	cout<<"\n\n Enter the width :";
 	cin>>w;
 	
 	cout<<"\n\n Enter the height :";
 	cin>>h;
    rectangle r(w,h);
    
    
    cout <<"\n\n total area: " <<r.getarea() ;
    
}

