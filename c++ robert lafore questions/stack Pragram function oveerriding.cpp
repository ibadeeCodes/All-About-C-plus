#include<iostream>
#include<process.h>
using namespace std;
class stack
{
	protected:
		enum
		{
		 MAX=3
		};
		int st[MAX];
		int top;
	public:
		stack()
		{
			top=-1;	
		}	
		void push(int var)
		{
			st[++top]=var;
		}
		int pop(void)
		{
			return st[top--];
		}
};
class stack2:public stack
{
	public:
	void push(int var)
	{
		if(top>=MAX-1)
		{
			cout<<"sorry!! Stack is full.";
		}
		else
		{
			stack::push(var);
		}
	}
	int pop(void)
	{
		if(top<0)
		{
			cout<<"Stack is already empty!!";
		}
		else
		{
		return stack::pop();
		}
	}
	int display(void)
	{
		return top;
	}
};
main()
{
	stack2 s1;
	s1.push(1);
	s1.push(3);
	s1.push(43);
cout << endl << s1.pop(); //pop some values from stack
}
