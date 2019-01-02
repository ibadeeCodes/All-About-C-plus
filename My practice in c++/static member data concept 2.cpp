#include<iostream>
using namespace std;
class employee
{
	public:
		
	int emp_no;
 	int static count;
	
	public:
		void counter()
		{
			count++;
		}
		void display()
		{
			cout<<"value of count: "<<count<<endl;
		}
};
int employee::count=0;
main()
{
	employee e1,e2,e3;
	e3.counter();
	e1.display();
	e3.counter();
	e2.display();
	
	
}
