#include<iostream>
using namespace std;
main()
{
	int number[5];
	int *p;
	int i;
	int n;
	p=number;
	*p=10;
	p++;
	*p=20;
	p=&number[2];*p=30;
	p=&number[3];*p=40;
	p=&number[4];*p=50;
	for(i=0;i<n;i++)
	{
		cout<<number[n]<<endl;
	}
}
