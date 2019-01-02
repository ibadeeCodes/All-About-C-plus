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
				op operator ++(int )
				{
					op temp;
					temp.x=x+1;
					temp.y=y+1;
					return temp;
				}
				
};
main()
{
	op o1,o2;
	o1.set();
	o2=(o1++);
	o2.show();
}
