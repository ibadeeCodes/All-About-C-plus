#include<iostream>
using namespace std;
class vehicle
{
	public:
		int quan;
		double price;
		char s[20];
	public:
	    vehicle():price(0),quan(0)
		{
			//price=0;
			//quan=0;
		}
		void pov()
		{
			cout<<"enter the price :";
			cin>>price;
		}	
		void qov()
		{
		cout<<"enter the quantity:";
		cin>>quan;
	    }
	    void display()
	    {
	    	cout<<"total price:"<<price<<endl;
	    	cout<<"total quantity:"<<quan;
		}
		void name()
		{
			cout<<"enter name of vehicle:";
			cin.get(s,20);
		}
};
class bike:public vehicle
{
	
};
class car:public vehicle
{
	
};
main()
{
	car c1,c2;
	bike b1,b2;
	int total;
	cout<<"            WELCOME TO THE SHOWROOM:\n"<<endl;
	cout<<"enter details of car 1:\n";
	c1.name();
	c1.pov();
	c1.qov();
	//c1.display();
	
	cout<<"enter details of car 2:\n";
	c2.name();
	c2.pov();
	c2.qov();
	//c2.display();
	total=c1.price+c2.price;
	cout<<"total:"<<total;
	
	cout<<"enter details of bike 1:\n";
	b1.name();
	b1.pov();
	b1.qov();
	//b1.display();
	
	
	cout<<"enter details of bike 2:\n";
	b2.name();
	b2.pov();
	b2.qov();
	//b2.display();
	
	cout<<"Final list of the items is given below:\n"<<endl;
	cout<<"The list of cars:\n";
	c1.display();
	c2.display();
	cout<<"\n The list of bikes:\n"<<endl;
	b1.display();
	b2.display();
	cout<<"\nBoth classes car and bike are used successfully using the class vehicle!!";
}
