#include<iostream>
void digit_name(int);
using namespace std;
main()
{
	int dig;
	cout<<"Enter a number from 1 t0 5 to display it in words:"<<endl;
	cin>>dig;
	digit_name(dig);
}
void digit_name(int x)
{
	if(x==1)
	
	{
	
		cout<<"ONE";
}
	else if(x==2)
	{
		cout<<"TWO";
	}
	
	else if(x==3)
	{
		cout<<"THREE";
	}
	
	else if(x==4)
	{
		cout<<"FOUR";
	}
	
	else if(x==5)
	{
		cout<<"FIVE";
	}
	else
	{
		cout<<"Out of range";
	}
}
