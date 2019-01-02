#include<iostream>
#include<conio.h>
using namespace std;
class vehicle
{
	public:
		string type_of_car;
		string make;
		int model;
		string colour;
		int year;
		float miles_driven;
	public:
		vehicle(string toc,string company,int mod,string colr,int yr,float md):
		 type_of_car(toc),make(company),model(mod),colour(colr),year(yr),miles_driven(md)
		 {
		 	
		 }
};
class gasvehicle:virtual public vehicle
{
	public:
		int fuel_tank;
	public:
		gasvehicle(string toc,string company,int mod,string colr,int yr,float md,int ft):
		 vehicle(toc,company,mod,colr,yr,md),fuel_tank(ft)
		 {
		 	
		 }
};
class electricvehicle: virtual public vehicle
{
	public:
		int energy_storage;
	public:
	    electricvehicle(string toc,string company,int mod,string colr,int yr,float md,int es):
		 vehicle(toc,company,mod,colr,yr,md),energy_storage(es)
		 {
		 	
		 }	
};
class heavyvehicle: virtual public gasvehicle,virtual public electricvehicle
{
	public:
		int maxweight;
		int no_of_wheels;
		float length;
	public:
		heavyvehicle(string toc,string company,int mod,string colr,int yr,float md,int es,int ft,int mw,int now,float len):
		 vehicle(toc,company,mod,colr,yr,md),gasvehicle(toc,company,mod,colr,yr,md,ft),
		 electricvehicle(toc,company,mod,colr,yr,md,es),maxweight(mw),no_of_wheels(now),length(len)
		 {
		 	
		 }
};
class constructiontruck:virtual public heavyvehicle
{
	public:
		string cargo;
	public:
		constructiontruck(string toc,string company,int mod,string colr,int yr,float md,int es,int ft,int mw,int now,float len,string cg):
		 vehicle(toc,company,mod,colr,yr,md),gasvehicle(toc,company,mod,colr,yr,md,ft),
		 electricvehicle(toc,company,mod,colr,yr,md,es),
		 heavyvehicle(toc,company,mod,colr,yr,md,es,ft,mw,now,len),cargo(cg)
		 {
		 	
		 }
		void display()
		{
		cout<<"ct"<<endl;	
		} 
};
class bus: virtual public heavyvehicle
{
	public:
		int no_of_seats;
	public:
	bus(string toc,string company,int mod,string colr,int yr,float md,int es,int ft,int mw,int now,float len,int nos):
		 vehicle(toc,company,mod,colr,yr,md),gasvehicle(toc,company,mod,colr,yr,md,ft),
		 electricvehicle(toc,company,mod,colr,yr,md,es),
		 heavyvehicle(toc,company,mod,colr,yr,md,es,ft,mw,now,len),no_of_seats(nos)
		 {
		 	
		 }
	void display()
		{
			cout<<"Type of car: "<<type_of_car<<endl;
			cout<<"Manufacturer: "<<make<<endl;
			cout<<"Model: "<<model<<endl;
			cout<<"Colour: "<<colour<<endl;
			cout<<"Year: "<<year<<endl;
			cout<<"Miles driven: "<<miles_driven<<endl;
			cout<<"Fuel Tank in liters: "<<fuel_tank<<endl;
			cout<<"Energy storage in power: "<<energy_storage<<endl;
			cout<<"Maximum weight: "<<maxweight<<endl;
			cout<<"Number of wheels: "<<no_of_wheels<<endl;
			cout<<"length of vehicle in meters: "<<length<<endl;
			cout<<"no of seats: "<<no_of_seats<<endl;	
		}	 	
};
class highperformance: public gasvehicle
{
	public:
		int horsepower;
		int topspeed;
	public:
		highperformance(string toc,string company,int mod,string colr,int yr,float md,int ft,int hp,int ts):
		vehicle(toc,company,mod,colr,yr,md),gasvehicle(toc,company,mod,colr,yr,md,ft),horsepower(hp),topspeed(ts)
		{
			
		}	
};
class sportscar: public highperformance
{
	public:
		string gearbox;
		string drivesystem;
	public:
		sportscar(string toc,string company,int mod,string colr,int yr,float md,int ft,int hp,int tp,string gb,string ds):
		vehicle(toc,company,mod,colr,yr,md),
		highperformance(toc,company,mod,colr,yr,md,ft,hp,tp),gearbox(gb),drivesystem(ds)
		{
				
		}
};
main()
{
	bus b1("4x4","DAEWOO",2018,"Black",2018,500,250,50,1250,4,20,32);
	b1.display();
	cout<<endl;
	cout<<"size of bus object(b1):"<<sizeof(b1)<<" bytes";
}
