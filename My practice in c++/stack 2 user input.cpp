#include<iostream>
using namespace std;
class stack
{
	public:
	int top,value;
	enum
	{
		MAX=3
	};
	int st[MAX];
	public:
		stack()
		{
			top=-1;
		}
	void push()
	{
		cout<<"enter a value"<<endl;
		cin>>value;
		st[++top]=value;
		cout<<"you pushed:"<<value;	
	}
	int pop()
	{
		return st[top--];
	}	
};
class stack2:public stack
{
	public:
	void push()
	{
		if(top>MAX-1)
		{
			cout<<"stack overflow"<<endl;
		}
		else
		{
			stack::push();
		}
	}
	int pop()
	{
		if(top<0)
		{
			cout<<"stack underflow"<<endl;
		}
		else
		{
			cout<<"you popped:"<<endl;
			return stack::pop();
		}
	}
};
main()
{
	stack2 s1;
	s1.push();
	s1.push();
	cout<<s1.pop()<<endl;
	cout<<s1.pop();
}
