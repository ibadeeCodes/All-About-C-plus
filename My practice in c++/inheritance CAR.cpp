#include<iostream>
using namespace std;
class car
{
	protected:
		char owner[30];
		char name[20];
		int model;
		char colour[10];
		double prize;
	public:
		void get()
		{
			cout<<"enter the name of owner:";
			cin>>owner;
			cout<<"\nenter the name of car:";
			cin>>name;
			cout<<"\nenter the model:";
			cin>>model;
			cout<<"\nenter the colour of the car";
			cin>>colour;
			cout<<"\nenter the prize of the car";
			cin>>prize;
		}
		void disp()
		{
			cout<<"\nname of owner:"<<owner;
			cout<<"\nname of car:"<<name;
			cout<<"\nmodel:"<<model;
			cout<<"\ncolour of the car:"<<colour;
			cout<<"\nprize of the car"<<prize;
		}
};
class hybridcar
{
	protected:
		int battery;
	public:
		void input()
		{
		cout<<"enter the battery power of car in volts:";
		cin>>battery;	
		}
		void output()
		{
			cout<<"\nthe battery power is:"<<battery;
		}
};
class sportscar:public car,public hybridcar
{
	protected:
		int boost;
		int airbag;
	public:
		void take()
		{
		car::get();
		hybridcar::input();
		cout<<"enter the boost power:";
		cin>>boost;
		cout<<"enter the airbag pressure";
		cin>>airbag;
		}
		void give()
		{
			car::disp();
			hybridcar::output();
			cout<<"airbag pressure is:"<<airbag;
			cout<<"boost power is:"<<boost;
		}
};
main()
{
	sportscar s1;
	s1.take();
	s1.give();
	}
