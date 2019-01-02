#include<iostream>
using namespace std;
void increaser (void* data,int psize)
{
	if(psize==sizeof(char))
	{
		char *c;
		c=(char*) data;
		++(*c);
	}
	else if(psize==sizeof(int))
	{
		int *i;
		i=(int*)data;
		++(*i);
	}
}
main()
{
	char a='x';
	int	b=1600;
	increaser(&a,sizeof(a));
	increaser(&b,sizeof(b));
	cout<<a<<endl;
	cout<<b;
}
