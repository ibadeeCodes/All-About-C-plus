#include<iostream>
using namespace std;
class box
{
	public:
		
	int h,l,area;
	public:
		box()
		{
			l=1;
			h=1;
			
		}
		void get()
		{
			cout<<"enter h"<<endl;
			cin>>h;
			
			cout<<"enter l"<<endl;
			cin>>l;
		}
		void add(box a,box b)
		{
			l=a.l+b.l;
			h=a.h+b.h;
		}
		void display()
		{
			cout<<"area is :"<<l*h;
			
		}
};
main()
{
	box b1,b2,b3;
	b2.get();
	b3.get();
	b1.add(b2,b3);
	b1.display();
}
