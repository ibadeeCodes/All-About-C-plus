#include<iostream>
using namespace std;
class a
{
	public:
		void display()
		{
			cout<<"a"<<endl;
		}
};
class b : public a
{	
	public:
	void display()
	{
	cout<<"b"<<endl;	
		}	
};
main()
{
	a a1;
	b b1;
	a1.display();
	
	
}
