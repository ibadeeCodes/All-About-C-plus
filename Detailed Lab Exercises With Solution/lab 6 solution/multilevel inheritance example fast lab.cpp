#include<iostream>
using namespace std;
class person
{
	protected:
		char name[50];
		int age;
		char gender[20];
	public:
	void get()
	{
		cout<<"enter name:"<<endl;
		cin>>name;
		cout<<"enter age :"<<endl;
		cin>>age;
		cout<<"enter gender:"<<endl;
		cin>>gender;
	}
	void display()
	{
		cout<<"name is:"<<name<<endl;
		cout<<"age is:"<<age<<endl;
		cout<<"gender is :"<<gender<<endl;
	}	 
};
class employee:public person
{
	protected:
		char company[20];
		int exp;
		float sal;
	public:
		void get()
		{
			person::get();
			cout<<"enter company name:"<<endl;
			cin>>company;
			cout<<"enter experience:"<<endl;
			cin>>exp;
			cout<<"enter salary:"<<endl;
			cin>>sal;
		}
		void display()
		{
			person::display();
			cout<<"the company name is:"<<company<<endl;
			cout<<"experience is :"<<exp<<endl;
			cout<<"salary is:"<<sal<<endl;
		}
};
class programmer:public employee
{
	protected:
		int lang;
	public:
	void get()
	{
		employee::get();
		cout<<"enter number of languages known:"<<endl;
		cin>>lang;
	}
	void display()
	{
		employee::display();
		cout<<"number of languages known are:"<<lang<<endl;;	
	}	
};
main()
{
	programmer p1;
	cout<<"enter data:"<<endl;
	
	p1.get();
	
	cout<<"display data:"<<endl;
	
	p1.display();
	
	cout<<"bye!!!!!!!!!!!"<<endl;
	
}
