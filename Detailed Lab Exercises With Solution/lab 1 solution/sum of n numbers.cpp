#include<iostream>
using namespace std;
main()
{
	int n,i;
	long sum=0;
	cout<<"enter a number till which you want sum";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"the sum is "<<sum<<endl;
	
}
