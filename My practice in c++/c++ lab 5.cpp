#include<iostream>
using namespace std;
class toll
{
 private:
 	int total_cars,total_money;
 public:
 	toll()
 	{
 		total_cars=0;
 		total_money=0;
	 }
	 void paying_car()
	 {
	 	total_cars++;
	 	total_money=total_money+10;
	 }
	 void not_paying_car()
	 {
	 	total_cars++;
	 }
	 void display()
	 {
	 	cout<<"total cars passed:"<<total_cars;
	 	cout<<"total money collected:"<<total_money;
	 }
};
main()
{
	toll t1;
	int a;
	cout<<"enter\n1)paying car\n2)not paying car\n3)total car and money collected";
	while(a!=2)
	{
		cout<<"\n";
		cin>>a;
		if(a==1)
		{
		t1.paying_car();
		}
		else if(a==0)
		{
			t1.not_paying_car();
		}
	}
	t1.display();
}
