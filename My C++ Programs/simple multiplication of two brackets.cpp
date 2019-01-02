#include<iostream>
using namespace std;
class multiply{
	private:
		int x,y,sum;
		public:
			multiply()
			{
			x=0;
			y=0;	
			}
		void set()
			{
				cout<<"enter the value of x:";
				cin>>x;
				cout<<"enter the value of y:";
				cin>>y;
			}
			multiply operator *(multiply m)
			{
				multiply temp;
				   temp.x=(x*m.x)+(x*m.y);
				   temp.y=(y*m.x)+(y*m.y);
				   temp.sum=temp.x+temp.y;
				   return temp;
			}
			void show()
			{
				cout<<"the answer of multiplication is :"<<sum;
			}
};
main()
{
	multiply m1,m2,m3;
	m1.set();
	m2.set();
	m3=m1*m2;
	m3.show();
	
}
