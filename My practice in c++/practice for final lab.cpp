#include<iostream>
using namespace std;
main()
{
	int i,element,comp=0,pos,arr[]={1,2,3,4,5,6,7,8,9,10};
	cout<<"Enter 10 elements in array:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"Enter element:"<<endl;
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Search an element with its index(position)"<<endl;
	cin>>element;
	for(i=0;i<10;i++)
	{
		++comp;
		if(arr[i]==element)
		{
			pos=i;
			break;
		}
	}
	cout<<endl;
	cout<<"[";
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<" , ";
	}
	cout<<"]";
	cout<<endl;
	cout<<"total comparisons:"<<comp<<endl;
	cout<<"element found at index: ["<<pos<<"]"<<endl;
	cout<<"==========================================="<<endl;
	return 0;
}
