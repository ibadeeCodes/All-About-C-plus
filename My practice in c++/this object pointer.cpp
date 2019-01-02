#include<iostream>
using namespace std;
class smallbox
{
	public:
	int l,b,h;
	public:
	void setdimension(int x,int y,int z)
	{
		this->l=x;
		this->b=y;
		this->h=z;
	}
	void display()
	{
		cout<<"l="<<l<<endl;
		cout<<"b="<<b<<endl;
		cout<<"h="<<h<<endl;
	}
};
main()
{
	smallbox b1;
	b1.setdimension(1,2,3);
    b1.display();
}
