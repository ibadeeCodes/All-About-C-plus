#include<iostream>
using namespace std;
void div()
{
	int a,i,divisors=0,*p;
	int arr[divisors];
	cout<<"enter an integar value:";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			divisors++;
			p=arr;
			p++;
			arr[divisors]=i;
		}
	}
	cout<<"total divisors are:"<<divisors;
	cout<<"\n";
	for(int j=1;j<=divisors;j++)
	{
		cout<<arr[j];
		cout<<"\n";
	}
}
main()
{
	div();
}
