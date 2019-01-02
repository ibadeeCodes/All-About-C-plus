#include<iostream>
using namespace std;
class fruit
{
	private:
	float weight_in_kg;
	float price_per_kg;
	float totalprice;
	public:
		fruit()
		{
			price_per_kg=0;
			weight_in_kg=0;
			totalprice=0;
		}
		void weight()
		{
			cout<<"Enter weight of the purchased fruit:"<<endl;
			cin>>weight_in_kg;
			cout<<"\n";
		}
		void price_kg()
		{
			cout<<"Enter price per kg:"<<endl;
			cin>>price_per_kg;
			cout<<"\n";
		}
		void total_price()
		{
			totalprice=price_per_kg*weight_in_kg;
			cout<<"The total price of the purchased fruit is:"<<totalprice;
			cout<<"\n";
		}
};
main()
{
	fruit orange,apple;
	cout<<"'WELCOME TO THE FRUIT MARKET'"<<endl;
	cout<<"Purchasing Orange:"<<endl;
	orange.weight();
	orange.price_kg();
	orange.total_price();
	cout<<"Purchasing Apple:"<<endl;
	apple.weight();
	apple.price_kg();
	apple.total_price();
	cout<<"'THANKS FOR VISITING OUR STORE'"<<endl;
}
