//Wap to Define a class to represent a bank account.


#include<iostream>
using namespace std;

class Bank
{
	string Depositor_name;
	int Acc_num;
	string Acc_type;
	float Balance;
	float depo_am;
	float withdraw_am;
	
	public:
			void setvalue()	
			{
				cout<<"\n\n Enter the Depositor name :";
				cin>>Depositor_name;
				cout<<"\n\n Enter the Account num :";
				cin>>Acc_num;
				cout<<"\n\n Enter the Account type : saving or current = ";
				cin>>Acc_type;
				cout<<"\n\n Enter the Balance :";
				cin>>Balance;	
			}	
			void deposited_amount()
			{
				cout<<"\n\n Enter the Amount you want to deposit in your account :";
				cin>>depo_am;
			}
			void check_balance()
			{
				cout<<"\n\n Your Account balance after deposited amount : "<<Balance+depo_am;
				cout<<"\n\n Enter the amount you want to withdraw : ";
				cin>>withdraw_am;
				
			}
			void printdata()
			{
				cout<<"\n\n Depositor name :"<<Depositor_name;
				cout<<"\n\n Depositor balance :"<<(Balance+depo_am)-withdraw_am;
			}
};
main()
{
	Bank C1;
	C1.setvalue();
	cout<<"\n\n**************************************************************************************";
	C1.deposited_amount();
	cout<<"\n\n**************************************************************************************";
	C1.check_balance();
	cout<<"\n\n**************************************************************************************";
	C1.printdata();
	cout<<"\n\n**************************************************************************************";
}










	


