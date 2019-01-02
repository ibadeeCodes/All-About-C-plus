#include<iostream>
using namespace std;
class publisher
{
	protected:
		string  pname;
		char place[30];
	public:
		publisher()
		{
			pname=" ";
		}
	void get()
	{
		cout<<"enter publisher's name:"<<endl;
		cin>>pname;
		cout<<"enter place of publishment:"<<endl;
		cin>>place;
	}
	void display()
	{
			cout<<"name of publisher is:"<<pname<<endl;
			cout<<"publishment place:"<<place<<endl;
	}	
};
class author
{
	protected:
		char  aname[30];
	public:
		author()
		{
				}
	void get()
	{
		cout<<"enter author's name:"<<endl;
		cin>>aname;
	}
	void display()
	{
			cout<<"author's name:"<<aname<<endl;
	}
};
class book: public publisher,public author
{
	protected:
		char title[20];
		int price;
		int pages;
	public:
		book()
		{
		
			price=0;
			pages=0;
		}
		void get()
		{	publisher::get();
			author::get();
			cout<<"enter title of book:"<<endl;
			cin>>title;
			cout<<"enter price of book:"<<endl;
			cin>>price;
			cout<<"enter pages of book:"<<endl;
			cin>>pages;
		}
		void display()
		{
			publisher::display();
			author::display();
			cout<<"title of book is :"<<title<<endl;
			cout<<"price of book is :"<<price<<endl;
			cout<<"the pages in book:"<<pages<<endl;
		}
};
main()
{
	book b1;
	cout<<"enter data for book 1:"<<endl;
	b1.get();
	cout<<endl;
	cout<<endl;
	cout<<"data of book 1:"<<endl;
	b1.display();
	cout<<"thanks bye!!!!!!!!!!!!!!!";
}
