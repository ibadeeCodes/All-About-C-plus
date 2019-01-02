#include<iostream>
using namespace std;
class account
{
	private:
		long accountnumber;
	protected:
		string name;
	public:
		const string accounttype;
	account(long accnumber,string holdersname,const string& acctype): //constructor-
	accountnumber(accnumber),name(holdersname),accounttype(acctype)//-of class account..
		{
			cout<<"CLass:account's constructor has been called!!"<<endl;
		}		
	~account()
		{
			cout<<endl;
			cout<<"object destroyed!!"<<endl;
		}	
	const long getaccnumber()const
		{
			return accountnumber;
		}
	void displaydetails()
		{
			cout<<"account holder:"<<name<<endl;
			cout<<"account number:"<<accountnumber<<endl;
			cout<<"account type:"<<accounttype<<endl;
		}
};
class currentaccount:public account
{
	protected:
		float balance;
	public:
		currentaccount(long accnumber,const string& accholder,const string& acctype,double accbalance):
		account(accnumber,accholder,acctype),balance(accbalance)
		{
			cout<<"constructor of base class:currentaccount has been called"<<endl;
		}
	void deposit_curbal()
		{
			float deposit;
			cout<<"enter ammount of deposit:"<<endl;
			cin>>deposit;
			balance=balance+deposit;
		}
	void display()
		{
			name="ibad ullah shaikh";
			displaydetails();
			cout<<"current balance is:"<<balance;
		}				
};
main()
{
	currentaccount c1(41303,"ibad ullah shaikh","current account",2000);
	c1.deposit_curbal();
	c1.display();
}
