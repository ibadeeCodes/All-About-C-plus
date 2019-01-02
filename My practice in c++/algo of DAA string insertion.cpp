#include<iostream>
using namespace std;
class complex
{
	public:
	int x,y;
	public:
	
	void show()
	{
		cout<<"x="<<x<<"y="<<y;
	}
	void set(int a,int b)
	{
		x=a;
		y=b;
	}
	complex operator +(complex s)
	{
		complex temp;
		temp.x=x+s.x;
		temp.y=y+s.y;
		return (temp);
	}
	
};
main()
{
	complex c1,c2,c3;
	c1.set(3,4);
	c2.set(5,6);
	c3=c1+c2;
	c3.show();
}


