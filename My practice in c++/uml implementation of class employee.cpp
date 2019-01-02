#include<iostream>
using namespace std;
class employee
{
	protected:
		char name[30];
		long number;
	public:
		employee()
		{
			number=0;
		}
		void get()
		{
			cout<<"enter name:"<<endl;
			cin>>name;
			cout<<"enter number:"<<endl;
			cin>>number;
		}
		void display()
		{
			cout<<"name is:"<<name<<endl;
			cout<<"number is :"<<number<<endl;
		}
};
class manager: public employee
{
	protected:
		int manage;
	public:
		manager()
		{
			manage=0;
		}
		void get()
		{
			employee::get();
			cout<<"enter years of management experience:"<<endl;
			cin>>manage;
		}
		void display()
		{
			employee::display();
			cout<<"management experience is:"<<manage;
		}
};
class scientist: public employee
{
	protected:
		int publish,exp;
	public:
		scientist()
		{
			publish=0;
			exp=0;
		}
		void get()
		{
			employee::get();
			cout<<"enter number of published books:"<<endl;
			cin>>publish;
			cout<<"enter number of experiments done :"<<endl;
			cin>>exp;
		}
		void display()
		{
			employee::display();
			cout<<"number of published books are:"<<publish;
			cout<<"number of experiments done are:"<<exp;
		}
};
class labour:public employee
{
	
};
main()
{
	manager m1;
	scientist s1,s2;
	labour l1;
	cout<<"enter data for manager:"<<endl;
	m1.get();
	cout<<"enter data for scientist 1:"<<endl;
	s1.get();
	cout<<"enter data for scientist 2:"<<endl;
	s2.get();
	cout<<"enter data for the labour:"<<endl;
	l1.get();
	cout<<endl;
	cout<<endl;
	cout<<"data of manager:"<<endl;
	m1.display();
	cout<<"data of scientist 1:"<<endl;
	s1.display();
	cout<<"data of scientist 2:"<<endl;
	s2.display();
	cout<<"data of labour:"<<endl;
	l1.display();
	
}
