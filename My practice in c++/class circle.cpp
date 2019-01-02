#include<iostream>
using namespace std;
class circle{
	private:
		float r,a,cir;
	public:
	    circle()
		{
			r=0;
			a=0;
			cir=0;
		}
		void area()	
		{
			cout<<"enter radius to find area:"<<endl;
			cin>>r;
			a=3.14*r*r;
			cout<<"area:"<<a;
		}
		void circumference()
		{
			cout<<"enter radius to find circumference:"<<endl;
			cin>>r;
			cir=2*3.14*r;
			cout<<"circumference:"<<cir;
		}
			
};
main()
{
	circle c1;
	c1.area();
	c1.circumference();
}
