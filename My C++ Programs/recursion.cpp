//RECURSION OF FACTORIAL PROGRAM:
#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
main()
{
	int f=fact(3);
	cout<<f;
}
