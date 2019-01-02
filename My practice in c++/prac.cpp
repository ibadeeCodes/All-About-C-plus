#include<iostream>
using namespace std;
main()
{
	int a[10],i,n,m;
	cout<<"enter elements in an array"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the element to insert"<<endl;
	cin>>n;
	cout<<"enter the index where to insert"<<endl;
	cin>>m;
	for(i=0;i<10;i++)
	{
		if(i==m)
		{
			a[i]=n;
		}
	}
	cout<<"the updated list is:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
}
