#include<iostream>
using namespace std;
class test{
	public:
		int count;
	public:
		test():count(0)   //constructor
		{
			
		}
		test operator-() //[ ] custom made
		{
			-count;
			test temp;
			temp.count=count;
			return temp;
		}
		int getcount()
		{
			return count;
		}
};
main()
{
	test t1,t2;
	int a=1;
	cout<<"t1="<<t1.getcount()<<endl;
	cout<<"t2="<<t2.getcount()<<endl;
	t1=-t2;
	cout<<"t1="<<t1.getcount()<<endl;
	cout<<"t2="<<t2.getcount()<<endl;
	
	
	
	
	
}
