#include<iostream>
using namespace std;
void per_square()
{
	int j,start,end;
	cout<<"enter starting point:";
	cin>>start;
	cout<<"enter ending point:";
	cin>>end;
	for(int i=start;i<end;i++)
		if(j<end)
		{
			j=i*i;
			cout<<j;
			cout<<"\n";
		}
	
}
main()
{
per_square();	
}
