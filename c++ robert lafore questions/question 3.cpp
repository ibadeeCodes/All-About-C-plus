#include<iostream>
using namespace std;
class time
{
	private:
	int min,hour,sec;
	public:
		time()
		{
			min=0;
			hour=0;
			sec=0; 
		}
		void set()
		{
			cout<<"enter hours:"<<endl;
			cin>>hour;
			cout<<"enter minutes:"<<endl;
			cin>>min;
			cout<<"enter seconds:"<<endl;
			cin>>sec; 
		} 
		void show()
		{
			cout<<hour<<"h:"<<min<<"m:"<<sec<<"s";
		}
		time operator + (time t2)
		{
			time temp;
			temp.hour=hour+t2.hour;
			temp.min=min+t2.min;
			if(temp.min>=60)
			{
				temp.hour++;
				temp.min=temp.min-60;
			}
			temp.sec=sec+t2.sec;
			if(temp.sec>=60)
			{
				temp.min++;
				temp.sec=temp.sec-60;
			}
			return temp;			 
		}
};
main()
{
	time time1,time2,time3;
	cout<<"Enter first duration:"<<endl;
	time1.set();
	cout<<"\n\nEnter second duration:"<<endl;
	time2.set();
	time3=time1+time2;
	cout<<"\nThe total duration is:"<<endl;
	time3.show();
}
