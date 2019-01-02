#include<iostream>
using namespace std;
float wl (float width,float length)
{
	float l=length;
	float w=width;
	return l*w;	
}
float operation(float a,float b,float (*functioncall)(float,float))
{
	float g=(*functioncall)(a,b);
	return g;
}

main()
{
	float area=operation(1,2.1,wl);
	cout<<"area is:"<<area;
}
