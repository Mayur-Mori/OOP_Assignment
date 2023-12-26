/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/

#include<iostream>
using namespace std;


class Cricketer {
	protected:
    string Name;
    float innings;

public:
    void get_Data()
		 {
        cout << "Enter player name: ";
        cin >> Name;
        cout << "Enter innings played: ";
        cin >> innings;
    }
};

class Batsman : public Cricketer 
{

    float total_Runs;
    float average_Runs;
    int best_Performance;

	public:
	    void inputData() 
		{
	        Cricketer::get_Data(); 
	        cout << "Enter total runs: ";
	        cin >> total_Runs;
	        cout << "Enter best performance: ";
	        cin >> best_Performance;
	            	cal_AverageRuns(); 

	    }
	
	    void cal_AverageRuns() 
		{
	        if (innings > 0) 
			{
	            average_Runs = (total_Runs) / innings;
	        } else {
	            average_Runs = 0;
	            
				
	    }
}

    void displayData() {
    	cal_AverageRuns(); 
        cout << "\n\n Player Name: " << Name ;
        cout << "\n\n Matches Played: " << innings ;
        cout << "\n\n Total Runs: " << total_Runs ;
        cout << "\n\n Average Runs: " << average_Runs ;
        cout << "\n\n Best Performance: " << best_Performance ;
    }
};

main() 
{
    Batsman Player1;
    Player1.inputData();   
    Player1.displayData(); 

}
