#include<iostream>
using namespace std;
class employee
{
	protected:
		string name;
		long long number;
	public:
		void get()
		{
			cout<<"enter name:"<<endl;
			getline(cin,name);
			cout<<"enter number:"<<endl;
			cin>>number;	
		}	
		void disp()
		{
			cout<<"name is:"<<name<<endl;
			cout<<"number is:"<<number<<endl;
		}
};
class manager:public employee
{
	protected:
		string title;
		long long clubdues;
	public:	
		void get()
		{
			employee::get();
			cout<<"enter title:"<<endl;
			getline(cin,title);
			cout<<"enter club dues:"<<endl;
			cin>>clubdues;
		}
		void disp()
		{
			employee::disp();
			cout<<"title is:"<<title<<endl;
			cout<<"club dues are:"<<clubdues<<endl;
		}
};
class scientist:public employee
{
	protected:
		string title;
		int publication;
	public:
		void get()
		{
			employee::get();
			cout<<"enter titles:"<<endl;
			getline(cin,title);
			cout<<"enter publications"<<endl;
			cin>>publication;
		}
		void disp()
		{
			employee::disp();
			cout<<"total titles are:"<<title<<endl;
			cout<<"total publications are:"<<publication<<endl;	
		}		
};
class labour:public employee
{
	protected:
		string title;
	public:
		void get()
		{
			employee::get();
			cout<<"enter title:"<<title<<endl;
			getline(cin,title);
		}	
		void disp()
		{
			employee::disp();
			cout<<"titles are:"<<title<<endl;
		}
};
main()
{
	manager m1;
	scientist s1;
	labour l1;
	cout<<"Enter data for manager:"<<endl;
	m1.get();
	cout<<endl;
	cout<<"enter data for scientist:"<<endl;
	s1.get();
	cout<<endl;
	cout<<"enter data for labourer:"<<endl;
	l1.get();
	cout<<endl;
	cout<<"data for manager:"<<endl;
	m1.disp();
	cout<<endl;
	cout<<"data for scientist"<<endl;
	s1.disp();
	cout<<endl;
	cout<<"data for labourer"<<endl;
	l1.disp();
	cout<<endl;
}
