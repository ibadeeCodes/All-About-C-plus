#include<iostream>
using namespace std;
class d
{
private:
int feet,inches;
public:
int setdistance(int f,float in)
{
	feet=f;
	inches=in;
	
	}	
	void input()
	{
		cout<<"enter feets"<<endl;
		cin>>feet;
		cout<<"enter inches"<<endl;
		cin>>inches;
	}
	void display()
	{
		cout<<feet<<"/'-"<<inches<<"."<<endl;
	}
};
int main()
{
	d d1,d2;
	d1.setdistance(23,56);
	d2.input();
	d1.display();
	d2.display();
}
