#include<iostream>
using namespace std;
class cordinates
{
	public:
		int x,y,z;
	public:
		cordinates(): x(100),y(200),z(150)
		{
			
		}
		void inc()
		{
			x++;
			y++;
			z++;
		}
};
main()
{
	
	cordinates c1,c2;
	cout<<" cordinate 1 is x="<<c1.x<<endl<<"y="<<c1.y<<endl<<"z="<<c1.z<<endl;
    cout<<" cordinate 1 is x="<<c2.x<<endl<<"y="<<c2.y<<endl<<"z="<<c2.z<<endl;;
	//c2.inc();
	cout<<" cordinate 2 is x="<<c2.x<<endl<<"y="<<c2.y<<endl<<"z="<<c2.z;

}

