#include<iostream>
#include<string>
using namespace std;
class invoice{
	private:
	string part_num,part_des;
	int quan;
	float price,a;
	public:
		invoice()
		{
			part_num="";
			part_des="";
			quan=0;
			price=0.0;
		}
		void get()
		{
			cout<<"enter the part number:";
		    cin>>part_num;
			cout<<"enter part description:";
			cin>>part_des;
			cout<<"enter quantity:";
			cin>>quan;
			cout<<"enter price";
			cin>>price;
		}
		void gim()
		{
			a=quan*price;
			cout<<"the total ammount is "<<a;	
		}
};
main()
{
	invoice i;
	i.get();
	i.gim();
}
