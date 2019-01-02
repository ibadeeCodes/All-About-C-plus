#include<iostream>
using namespace std;
class employee{
	private:
		int en;
		float ec;
	public:
		employee()
		{
			en=0;
			ec=0;
		}
		void set()
		{
		cout<<"enter employee's number:"<<endl;
		cin>>en;
		cout<<"\nenter employees's compensation"<<endl;
		cin>>ec;	
		}
		void show()
		{
			cout<<"employee's number is :"<<en<<endl;
			cout<<"employees's compensation is :"<<ec<<endl;
		}	
};
main()
{
	employee e1,e2,e3;
	cout<<"SET DATA FOR EMPLOYEES:"<<endl;
	cout<<"EMPLOYEE 1:"<<endl;
	e1.set();
	cout<<"EMPLOYEE 2:"<<endl;
	e2.set();
	cout<<"EMPLOYEE 3:"<<endl;
	e3.set();
	cout<<"\n DISPLAYING DATA OF ALL THREE EMPLOYEES:"<<endl;
	e1.show();
	e2.show();
	e3.show();
	
	
	
}
