#include<iostream>
using namespace std;
class a
{
	public:
	void out()
	{
		cout<<"a"<<endl;
	}
};
class b: virtual public a
{
	public:
		void out()
		{
			cout<<"b"<<endl;
		}
};
class c: virtual public a
{
	
		
};
class d:public b , public c
{
	
	/*void out()
	{
		cout<<"d"<<endl;
		}
		*/	
};
main()
{ 
	a a1;
	b b1;
	c c1;
	d d1;
	d1.out();
}
