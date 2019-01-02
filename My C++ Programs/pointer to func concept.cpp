#include<iostream>
using namespace std;
int subtraction(int x,int y)
{
	return (x-y);
}
int addition(int x,int y)
{
	return x+y;
}
int operation(int x,int y,int (*functioncall)(int,int))
{
	int a;
	a=(*functioncall)(x,y);
	return a;
}
main()
{
int m,n;
int(*add)(int,int)=addition;
m=operation(7,8,subtraction);
n=operation(8,8,add);
cout<<"add or addition:"<<n;
cout<<"subtraction:"<<m;	
}
