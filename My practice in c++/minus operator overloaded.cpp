#include<iostream>
using namespace std;
class op{
	public:
		int x,y;
		public:
			op()
				{
					x=0;
					y=0;
				}
				void show()
				{
					cout<<x<<endl;
					cout<<y;
				}
				void set()
				{
					cout<<"enter x:"<<endl;
					cin>>x;
					cout<<"enter y:"<<endl;
					cin>>y;
				}
				op operator -()
				{
					op temp;
					temp.x=(-x);
					temp.y=(-y);
					return temp;
				}
				
};
main()
{
	op o1,o2;
	o1.set();
	o2=(-o1);
	o2.show();
}
