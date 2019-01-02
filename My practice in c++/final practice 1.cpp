#include<iostream>
using namespace std;
class box
{
	public:
		int l,w,h,volume;
	public:
		box()
		{
			l=0;
			w=0;
			h=0;
		}	
		void get()
		{
			cout<<"enter length"<<endl;
			cin>>l;
			cout<<"enter width"<<endl;
			cin>>w;
			cout<<"enter height"<<endl;
			cin>>h;
		}
		int vol()
		{
			volume=l*w*h;
			return volume;
		}
		box add(box b)
		{
			box temp;
			temp.l=this->l+b.l;
			temp.w=this->w+b.w;
			temp.h=this->h+b.h;
			return temp;
		}
};
main()
{
	box b1,b2,b3;
	float v;
	b1.get();
	v=b1.vol();
	cout<<"volume of box 1 is :"<<v<<endl;
	b2.get();
	v=b2.vol();
	cout<<"volume of box 2 is :"<<v<<endl;
	b3=b2.add(b1);
	v=b3.vol();
	cout<<"volume of v3 after sum of v1 and v2 is :"<<v<<endl;
	
}
