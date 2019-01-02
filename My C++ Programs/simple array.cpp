#include<iostream>
using namespace std;
main()
{
	int a,j,i,arr[5];
	cout<<"enter total number of element to be inserted:";
	cin>>j;
	for(i=0;i<j;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<j;i++)
	{
		cout<<arr[i];
	}
	cout<<"enter the index where the element to be deleted:"<<endl;
	cin>>a;
	for(i=0;i<j;i++)
	{
		if(arr[a]==arr[i])
		{
			for(i=0;i<j-a;i++)
			{
				cout<<arr[i];
			}
		}
	}
	
}
