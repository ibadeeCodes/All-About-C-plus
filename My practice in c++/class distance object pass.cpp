#include<iostream>
using namespace std;
class distance
{
	public:
	int feet;
	float inches;
	public:
		distance()
		{
			feet=0;
			inches=0;
		}
		void setdata()
		{
			cout<<"enter feet "<<endl;
			cin>>feet;
			cout<<"enter inches"<<endl;
			cin>>inches;
		}
		void show()
		{
			cout<<"feet="<<feet<<"\ninches"<<inches;
		}
		void cal(distance d1,distance d2)
		{
			inches=d1.inches+d2.inches;
			feet=0;
			if(inches>=12)
			{
				inches=inches-1;
				feet++;
							}
			feet=d1.feet+d2.feet;
		}
};
main()
{
	distance dis1,dis2,dis3;
	dis1.setdata();
	dis2.setdata();
	dis3.cal(dis1,dis2);
	dis3.show();
}
