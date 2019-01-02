//2,6,14,30,62.....
#include<iostream>
using namespace std;
main()
{
	int i,j=2,limit,k=0;
	cout<<"enter a number till which you want the series"<<endl;
	cin>>limit;
	cout<<j<<" ";
	for(i=0;i<=limit;i++)
	{
		j=(j*2)+2;
		cout<<j<<endl;
	cout<<j<<" ";	
	}
}
