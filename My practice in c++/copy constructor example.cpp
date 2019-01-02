#include<iostream>
using namespace std;
class test{
	public:
		int x,y;
	public:
		
	    test(int a,int b)
		{
			x=a;
			y=b;
		}	
		void display()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y;
		}
};
main()
{
	test t1(23,4),t2(1,2);
	cout<<"welcome to test"<<endl;
	t1.display();
	//
	t2.display();
	cout<<"\nexit"<<endl;
	
	
	
}
