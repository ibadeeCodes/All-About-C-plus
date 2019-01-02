#include<iostream>
void swap_float(float,float);
using namespace std;
main()
{
	float x,y;
	cout<<"enter x and y";
	cin>>x;
	cin>>y;
	swap_float(x,y);
	
	
}
void swap_float(float x,float y)
{
	float temp;
	temp=x;
	x=y;
	y=temp;
	
	cout<<"after swapping:";
	cout<<"x="<<x<<endl;
	cout<<"y="<<y;
}
