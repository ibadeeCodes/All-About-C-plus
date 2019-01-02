#include<iostream>
using namespace std;
main()
{
	int F,n,x,y;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	cout<<"x and y"<<endl;
	cin>>x;
	cin>>y;
	if(n>0)
	{
		F=x+y;
	}
	else
	{
		F=x-y;
	}
	cout<<"F is :"<<F;
}
