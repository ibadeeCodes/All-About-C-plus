#include<iostream>
using namespace std;
class prac
{
public:
int i;
public:
prac()
{
	i=0;
}
void set()
{
	cin>>i;
}
	void display()
	{
		cout<<i;
	}
};
class prac2:public prac
{
	public:
	int i1;
};
main()
{
	prac2 obj;
	obj.i1;
	obj.i;
	obj.display();
}

