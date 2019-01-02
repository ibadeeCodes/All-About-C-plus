#include<iostream>
using namespace std;
class publication
{
	public:
		string title;
		float price;
	public:
		publication()
		{
			title=" ";
			price=0.0;
		}
		void getdata()
		{
			cout<<"enter title:"<<endl;
			cin>>title;
			cout<<"enter price"<<endl;
			cin>>price;
		}
		void putdata()
		{
			cout<<"title:"<<title<<endl;
			cout<<"price:"<<price<<endl;
		}
};
class book: public publication
{
	public:
		int page_count;
	public:
		book()
		{
			page_count=0;
		}
		void getdata()
		{
			publication::getdata();
			cout<<"enter pages of book:"<<endl;
			cin>>page_count;
		}
		void putdata()
		{
			publication::putdata();
			cout<<"pages of book:"<<page_count<<endl;
		}
};
class tape:public publication
{
	public:
		int minutes;
	public:
		tape()
		{
			minutes=0;
		}
		void getdata()
		{
			publication::getdata();
			cout<<"enter minutes:"<<endl;
			cin>>minutes;
		}
		void putdata()
		{
			publication::putdata();
			cout<<"total minutes:"<<minutes<<endl;
		}
};
main()
{
	book b1;
	tape t1;
	cout<<"BOOK DETAILS:"<<endl;
	b1.getdata();
	b1.putdata();
	cout<<endl;
	cout<<"TAPE DETAILS:"<<endl;
	t1.getdata();
	t1.putdata();
	
}
