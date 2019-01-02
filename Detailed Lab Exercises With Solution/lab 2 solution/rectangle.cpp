#include<iostream>
using namespace std;
main()
{
	int i,k,l,w;
	char c;
	cout<<"enter length of rectangle:";
	cin>>l;
	cout<<"enter width of rectangle:";
	cin>>w;
	cout<<"enter the symbol for frame:";
	cin>>c;
	for(i=1;i<=w;i++)
	{
		for(k=1;k<=l;k++)
		{
			if(i==1||i==w)
			{
				cout<<c;
			}
			else if(k==1||k==l)
			{
				cout<<c;
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}
