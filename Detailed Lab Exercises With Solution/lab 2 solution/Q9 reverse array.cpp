#include<iostream>
using namespace std;
main()
{
	int i,a[10],*p;
	p=a;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
		cout<<" ";
	}
	for(i=0;i<10;p++)
	{
		cout<<a[i];
		cout<<" ";
	}
	cout<<"\n";
	for(i=9;i>=0;i--)
	{
		cout<<a[i];
		cout<<" ";
	}
}
