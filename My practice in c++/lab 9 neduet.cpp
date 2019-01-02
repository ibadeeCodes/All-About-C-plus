#include<iostream>
using namespace std;
class father
{
protected:
	int age;
public:
	father (int x)
	{ 
		age = x;
	}
virtual void iam()
	{ 	
		cout<<"i am father , my age is :"<< age<<endl;
	}
};
class son: public father
{
	protected:
		int age;
	public:
		son(int x):father(x)
		{
			age=x;
		}
		void iam()
		{
			cout<<"i am son , my age is :"<<age<<endl;
		}
};
class daughter: public father
{
	public:
	int age;
	public:
	daughter(int x):father(x)
	{
		age=x;
		}	
	void iam()
	{
		cout<<"i am daughter , my age is: "<<age<<endl;
	}	
};
main()
{
	father f1(40),*f;
	son s1(10);
	daughter d1(15);
	f=&f1;
	f->iam();
	f=&s1;
	f->iam();
	f=&d1;
	f->iam();
	return 0;
}
