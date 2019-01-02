#include<iostream>
using namespace std;
class acccount
{
	protected:
		double balance;
	public:
		void deposit()
		{
			cout<<"enter deposit ammount:"<<endl;	
		}	
		void withdraw()
		{
			cout<<"enter withdraw ammount:"<<endl;
		}
		void checkbalance()
		{
			cout<<"your current balance is: "<<balance<<endl;
		}
};
class interestaccount: virtual public account
{
 	public:
 		double interest=((30/100)*b);
 	public:
	 	void deposit()
	 	{
	 		balance=(balance+b);
	 		cout<<"interest of 30% of deposited amount: "<<interest<<endl;
		}
};
class chargingaccount:virtual public account
{
	public:
		int fee=300;
	public:
		void withdraw()
		{
			balance=(balance-b)-fee;			
		}		
};
class aci: public chargingaccount,public interestaccount
{
	public:
		chargingaccount chargingaccount=&(withdraw());
		interestaccount interestaccount=&(deposit()); 
	public:
		void transfer(double b,*chargingaccount)
		{
			chargingaccount::withdraw();
		}
		void transfer(double b,*interestaccount)
		{
			interestaccount::deposit();
		}
};
main()
{
	aci a1;
	interestaccount i1;
	chargingaccount c1;
	a1.transfer(30000,i1);
}
