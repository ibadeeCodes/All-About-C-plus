#include<iostream>
using namespace std;
class person
{
	private:
	int age;
	protected:
	string name;
	public:
	person(int a,string pername):age(a),name(pername)
	{
		cout<<"constructor of class:person called!!"<<endl;	
	}
	void displayperson()
	{
		cout<<"name :"<<name<<endl;	
		cout<<"age :"<<age<<endl;
	}	
};
class employee
{
	private:
	int empid;
	protected:
	int salary;	
	public:
		employee(int emp,int sal):empid(emp),salary(sal)
		{
			cout<<"constructor of class:employee has been called"<<endl;
		}
	void dispemployee()
	{
		cout<<"employee id :"<<empid<<endl;
		cout<<"employee salary is :"<<salary<<endl;
	}	
};
class manager:public person,public employee
{
	private:
		string type;
	public:
		manager(int a,string pername,int emp,int sal,string managertype):
		person(a,pername),employee(emp,sal),type(managertype)
		{
			cout<<"constructor of class:manager called!!"<<endl;	
		}
	void displaymanager()
	{
		person::displayperson();
		employee::dispemployee();
		cout<<"manager type:"<<type<<endl;
	}	
};
class itmanager:public manager
{
	protected:
	int persons;
	public:
	itmanager(int a,string pername,int emp,int sal,string managertype,int pers):
	manager(a,pername,emp,sal,managertype),persons(pers)
	{
		cout<<"constructor of itmanager has been called!!"<<endl;
	}
	void display()
	{
		manager::displaymanager();
		cout<<"persons:"<<persons;	
	}	
};
main()
{
	itmanager i1(35,"ibadee",13456,400000,"senior",4);
	i1.display();
}	
