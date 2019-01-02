#include<iostream>
using namespace std;
class cars
{
	private:
		int car_price;
	public:
		void input()
		{
			cin>>car_price;
		}
		void display()
		{
			cout<<"the price of car is :"<<car_price<<endl;
		}
		int total(cars civic,cars city,cars cultus)
		{
			int t=civic.car_price+city.car_price+cultus.car_price;
		}
};
main()
{
	cars civic,city,cultus,total;
	cout<<"enter the price of civic"<<endl;
	civic.input();
	cout<<"enter the price of city"<<endl;
	city.input();
	cout<<"enter the price of cultus"<<endl;
	cultus.input();
	civic.display();
	city.display();
	cultus.display();
	total.display();
	
	
	
	
	
}
