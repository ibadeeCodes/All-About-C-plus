#include<iostream>
using namespace std;
main()
{
	int n,i,sum=0;
	float avg,marks;
	cout<<"enter number of courses"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"enter marks for"<<i<<"st subject"<<endl;
		cin>>marks;
		sum=sum+marks;
	}
	avg=sum/n;
	cout<<"the sum is :"<<sum<<endl;;
	cout<<"The average of total subjects is:"<<avg;
}
