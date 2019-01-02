#include<iostream>
using namespace std;
class factorial
{
   public:
   int fac=1,i;
   int a;
   double d;
   float f;
   char c='A';
   public:
   	int fact(int a)
   	{
   		for(i=a;i>=1;i--)
   		{
   			fac=fac*i;
		   }
		   return fac;
	   }
	   //
	   int fact(float f)
   	{
   		for(i=f;i>=1;i--)
   		{
   			fac=fac*i;
		   }
		   return fac;
	   }
	   //
	   int fact(double d)
   	{
   		for(i=d;i>=1;i--)
   		{
   			fac=fac*i;
		   }
		   return fac;
	   }
	   //
	   int fact(char c)
   	{
   		for(i=c;i>=1;i--)
   		{
   			fac=fac*i;
		   }
		   return fac;
	   }
	   //
};
main()
{
	factorial f1;
	int x;
	x=f1.fact();
	cout<<"The factorial is :"<<x;
}

