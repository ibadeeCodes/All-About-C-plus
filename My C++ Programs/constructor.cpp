#include<iostream>
using namespace std;
class counter
{
private:
		unsigned int count;
	public:
	 counter(): count(100000)
	 {
	 	cout<<"hello im in counter";
		 }	
		 void increment_count()
		 {
		 	count++;
		 }
		 int get_count()
		 {
		 	return count;
		 }
};
main()
{
	counter c1,c2,c3;
	cout<<" c1 is:"<<c1.get_count()<<endl;
	cout<<" c2 is:"<<c2.get_count()<<endl;
	
	c1.increment_count();
	c2.increment_count();
	
	cout<<"now c1 is :"<<c1.get_count()<<endl;
	cout<<"now c2 is :"<<c2.get_count()<<endl;
	
	c1.increment_count();
	c2.increment_count();
	
	cout<<"now c1:"<<c1.get_count()<<endl;
	cout<<"now c2:"<<c2.get_count()<<endl;
	
	cout<<"now again c1 :"<<c1.get_count()<<endl;
	cout<<" now agin c2 :"<<c2.get_count()<<endl;
		
	counter();
	counter();
	
	cout<<"now again c1 :"<<c1.get_count()<<endl;
	cout<<" now agin c2 :"<<c2.get_count()<<endl;
		
		cout<<"c3:"<<c3.get_count()<<endl;
		c3.increment_count();
		cout<<"c3 now is:"<<c3.get_count()<<endl;
}
