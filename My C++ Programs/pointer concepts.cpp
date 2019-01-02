#include<iostream>
using namespace std;
main()
{
	int firstvalue,secondvalue;
	int *p1,*p2;
	firstvalue=10; 
	secondvalue=20; 
	p1=&firstvalue; //value pointed by p1.
	p2=&secondvalue; //value pointed by p2.
	cout<<firstvalue<<"\n";
	cout<<"address of first value:"<<p1<<endl;
	cout<<secondvalue<<endl;
	cout<<"address of second value"<<p2;
}
