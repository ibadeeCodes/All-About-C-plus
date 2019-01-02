#include<iostream>
using namespace std;
class car
{
 private:
 	int cp,cm;
 	public:
 		car()
 		{
 			cp=0;
 			cm=0;
		 }
 		void set()
 		{
 			cout<<"enter cars price";
 			cin>>cp;
 			cout<<"enter cars model";
 			cin>>cm;
		 }
		 void disp()
		 {
		 	cout<<"cars price is:"<<cp;
		 	cout<<"cars model is:"<<cm;
		 }
};
main()
{
	car c1,c2;
	c1.set();
	c1.disp();
	c2.set();
	c2.disp();
}

