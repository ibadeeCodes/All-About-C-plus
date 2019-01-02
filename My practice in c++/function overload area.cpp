#include<iostream>
using namespace std;
float cal(float);
float cal(float,float);
main()
{
	float r,w,l;
	cout<<"enter radius:"<<endl;
	cin>>r;
	cout<<cal(r)<<endl;
	cout<<"enter width length:"<<endl;
	cin>>w;
	cin>>l;
	cout<<cal(w,l);
}
float cal(float x,float y)
{
	return (x*y);
}
float cal (float r)
{
	return (3.142*r*r);
}
