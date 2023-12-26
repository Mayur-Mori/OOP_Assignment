/*
Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.
*/

#include<iostream>
using namespace std;

class Date
 {
	int day;
  	int month;
    int year;
		public:
			Date(int d, int m, int y)
			{
				 day = d;
    			 month = m;
   				 year = y;
			}
			
			 bool ValidDate()  
			 {
   				 if (month < 1 || month > 12)
   				 {
     			 return false;
					}
     			 
    			 if (day < 1 || day > 31)
      			 {
				   return false;
				   }
      			 
				 if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
     		    	{
				  return false;
				 	}

      			 if (month == 2) 
				   {
      			 		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
						   {
                 				if (day > 29)
         						{
								  return false;
								 }
      			 			} 
				   			else
				   			 {
       							 if (day > 28)
        						{
		  						return false;
								}
      						}
    		 	  }
				   	return true;
				  }
};
main()
{
	 int day, month, year;
  	 cout << "\n\n Input day: ";
     cin >> day;
     cout << "\n\n Input month: ";
     cin >> month;
     cout << "\n\n Input year: ";
     cin >> year;
     
     Date D(day, month, year);
     cout << "\n\n Date: " << day << "/" << month << "/" << year << endl;
     if (D.ValidDate())
    {
	cout << "\n\n The date is valid." << endl;
	}
  	else
  	{
    cout << "\n\n The date is invalid." << endl;
	  }
      
}
