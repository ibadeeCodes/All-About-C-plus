#include<iostream>
using namespace std;
class complex
{
	private:
	int x,y;
	public:
	void show()
	{
		cout<<x<<"+"<<y<<"i";
	}
	void set()
	{
		cout<<"enter the real part:"<<endl;
		cin>>x;
		cout<<"enter the imaginary part:"<<endl;
		cin>>y;
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
	c1.set();
	c2.set();
	c3=c1+c2;
	c3.show();
}


