#include<iostream>
using namespace std;
main()
{
	system("color 70");
	int i,n;
	int *p;
	cout<<"how many number you want in an array"<<endl;
	cin>>i;
	p=new int[i];
	for(n=0;n<i;n++)
	{
		cin>>p[n];
		cout<<endl;
	}
	cout<<"you entered :"<<endl;
	for(n=0;n<i;n++)
	{
		cout<<p[n]<<endl;
	}
	delete[] p;
	cout<<"after de allocation of dynamic memory:"<<endl;
	for(n=0;n<i;n++)
	{
		cout<<p[n]<<endl;
	}
}
