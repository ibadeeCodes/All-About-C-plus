#include<iostream>
using namespace std;
class rude
{
	public:
	int x;
	public:
		rude( int data) 
		{
			x=data;
		}
		void display()
		{
			cout<<x;
		}
		~rude()
		{
			
		}
};
main()
{
	rude r1(78);
	
	r1.display();
	 rude r2(34);
	r2.display();
	r2.display();
}
