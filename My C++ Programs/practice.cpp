#include<iostream>
using namespace std;
class obj
{
	public:
  int count;
  	public:
  		obj():count(0)
  		{
  			
		  }
		  void inc()
		  {
		  	count++;
		  }
		  void display()
		  {
		  	cout<<"count ="<<count;
		  }
};
int main()
{
	obj o1,o2;
	o1.display();
	o2.display();
	o1.inc();
	o2.inc();
	cout<<"after incrementation"<<endl;
	o1.display();
	o2.display();
	
	
	
	
}
