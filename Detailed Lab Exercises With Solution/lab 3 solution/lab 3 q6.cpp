#include<iostream>
using namespace std;
class vehicle
{
    public:
    int  speed=0,year;
	char manufacturer[20];
	public:
	      void accelerate()
		  {
		  	speed=speed+5;
			  }
			  void brake()
			  {
			  	speed=speed-5;
				  }	
				//void speeddisplay()
				  //{
				  	//cout<<"the current speed is :"<<speed;
				  //}
				 void sdc()
				 {
				 	cout<<"the current speed of car is :"<<speed<<"km/h";
				  }
				  void sdr()
				 {
				 	cout<<"the current speed of riksha is :"<<speed<<"km/h";
				  }  
};
//
main()
{
	vehicle bike,rikshaw;
	int a;
    //
    cout<<"-WELCOME TO SPEED TESTING SYSTEM-\n\n";
	cout<<"For BIKE:\n";
	cout<<"-Press \n1)Acceleration.\n2)Apply Brakes.\n3)Current speed display.\n"<<endl;
	cout<<"For RIKSHA:\n";
	cout<<"-Press\n4)Acceleration.\n5)Apply Brakes.\n6)Current speed display.\n\nPress 7 to exit the system."<<endl;
	//
	while(a!=9)
	{
		cin>>a;
		if(a==1)
		{
			bike.accelerate();
		
		}
		else if(a==2)
		{
			bike.brake();
		}
		else if(a==3){
			bike.sdc();
		}
		else if(a==4)
		{
		rikshaw.accelerate();	
		}
		else if(a==5)
		{
			rikshaw.brake();
		}
		else if(a==6)
		{
			rikshaw.sdr();
		}
		else
		{
			break;
		}
	}
	cout<<"\n-THANKS FOR USING OUR SPEED TESTING SYSTEM-";
}
