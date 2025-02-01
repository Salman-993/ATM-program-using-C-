#include <iostream>
using namespace std;
int main()
{
	const int user_pin=5050;
	int pin;
	int choice;
	int balance=50000;
	int withdraw;
	cout<<"Enter the PIN here:";
	cin>>pin;
	if(pin==user_pin)
	{
		cout<<"\n1.Balance Inquiry";
		cout<<"\n2.Balance withdraw";
		cout<<"\n3.Exit";
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Your account balance is:"<<balance<<endl;
				break;
			case 2:
				cout<<"Enter the amount you want to withdraw:"<<endl;
				cin>>withdraw;
				if(	withdraw>balance)
				{ cout<<"Balance is Insufficient:(";
				
				}
				else{
					balance=balance-withdraw;
					cout<<"Your balance is:"<<balance;
				
				}
				break;
			case 3:
				cout<<"good bye";
				break;
		
		}
		
	}
	else{
		cout<<" invalid pin";
	}	
		
		
}
	
	
	
	
	
	
	
	
	
