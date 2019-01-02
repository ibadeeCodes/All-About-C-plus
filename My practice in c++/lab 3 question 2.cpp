#include<iostream>
#include<string.h>
using namespace std;
class employee{
    public:
	char fname[20],lname[20];
	int incsalary,ysalary;
    int salary;
    public:
    	void set()
    	{
    		salary=0;
		}
		void display()
		{
			cout<<"enter name of employee:";
			cin.get(fname,20);
			cout<<"enter last name of employee:";
			cin.get(lname,20);
			cout<<"enter salary of employee";
			cin>>salary;
			if(salary<0)
			{
			set();	
			}
			else 
			{
			year();
			}
			inc();	
		}
		void year()
		{
			ysalary=salary*12;
			cout<<"salary per annum is :"<<ysalary;
		}
		void inc()
		{
		incsalary=(ysalary+(ysalary/12));
		cout<<"After 10% increment, now salary of per annum is:"<<incsalary;
		}
		void random()
		{
		cout<<"enter :";
		cin.get(lname,20);	
		}
};
main()
{
	employee e1,e2;
    cout<<"Employee 1:\n\n";
	e1.display();
	cout<<"Employee 2:\n\n";
    e2.display();
}
