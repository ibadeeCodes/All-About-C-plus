#include<iostream>
#include<string.h>
using namespace std;
class product
{
	protected:
		long barcode;
		string productname;
	public:
		product(long bar,string pname):barcode(bar),productname(pname)
			{
			
			}
		product()
			{
				barcode=0;
				productname="anonymous";
			}
		void setcode()
			{
				cout<<"enter barcode:"<<endl;
				cin>>barcode;
			}			
		void getcode()
			{
				cout<<"barcode of product is:"<<barcode;
			}
		void scanner()
			{
				cout<<"enter barcode of product:"<<endl;
				cin>>barcode;
				cout<<"enter name of product:"<<endl;
				cin>>productname;
			}			
		void printer()
			{
				cout<<"barcode of product is:"<<barcode<<endl;
				cout<<"name of product is:"<<productname<<endl;
			}	
};
class prepackedfood:public product
{
	protected:
		float price;
	public:
		prepackedfood(float pri,long bar,string pname):
		product(bar,pname),price(pri)
		{
			
		}
		prepackedfood()
		{
			price=0.0;
		}
		void scanner()
		{
			product::scanner();
			cout<<"enter price of prepacked food:"<<endl;
			cin>>price;
		}
		void printer()
		{
			product::printer();
			cout<<"price of prepacked food is	:"<<price;
		}
};
class freshfood:public product
{
	protected:
		float weight;
		float price_per_kg;
		float total;
	public:
		freshfood(float w,float ppkg,long bar,string pname):
		product(bar,pname),weight(w),price_per_kg(ppkg)
		{
			
		}
		freshfood()
		{
			weight=0.0;
			price_per_kg=0.0;
			total=0.0;
		}
		void scanner()
		{
			product::scanner();
			cout<<"enter weight in kg:"<<endl;
			cin>>weight;
			cout<<"enter price per kg:"<<endl;
			cin>>price_per_kg;
		}
		void printer()
		{
			product::printer();
			total=weight*price_per_kg;
			cout<<"weight in kg:"<<weight<<endl;
			cout<<"price per kg:"<<price_per_kg<<endl;
			cout<<"total price is: "<<total<<endl;
		}
};
main()
{
	product p1(22100,"SHAN-MASALA"),p2;
	prepackedfood pp1(250,22101,"DAIRYMILK"),pp2;
	freshfood ff1(2,500,22102,"COW-MEAT"),ff2;
	cout<<"Product 1:"<<endl;
	p1.printer();
	cout<<endl;
	cout<<"Product 2:"<<endl;
	cout<<"Enter data for product 2:"<<endl;
	p2.scanner();
	cout<<"Data for product 2:"<<endl;
	p2.printer();
	cout<<endl;
	cout<<"Prepacked food 1:"<<endl;
	pp1.printer();
	cout<<endl;
	cout<<"Prepacked food 2:"<<endl;
	cout<<"Enter data for prepacked food 2:"<<endl;
	pp2.scanner();
	cout<<"Data for prepacked food 2:"<<endl;
	pp2.printer();
	cout<<endl;
	cout<<"Fresh foot 1:"<<endl;
	ff1.printer();
	cout<<"Fresh food 2:"<<endl;
	cout<<"Enter data for fresh food 2:"<<endl;
	ff1.scanner();
	cout<<"Data for fresh food 2:"<<endl;
	ff1.printer();
	cout<<endl;
	cout<<"Thanks for visiting our store!!!"<<endl;
}
