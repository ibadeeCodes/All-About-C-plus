#include<iostream>
using namespace std;
class d
{
private:
int feet,inches;
public:
void setdistance(int f,float in)
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
void edit()
	{
		cout<<"again enter feets";
		cin>>feet;
		cout<<"again enter inches";
		cin>>inches;
	}
};
int main()
{
	int option;
	d d1,d2;
	d1.setdistance(23,56.89898);
	d2.input();
	d1.display();
	d2.display();
	cout<<"enter a option"<<endl;
	cout<<"1 for edit , 2 for end program:"<<endl;
	cin>>option;
	switch(option)
	{
	
	case 1:
		
			d2.edit();
			d2.display();
			break;
    case 2:
				break;
}
}
