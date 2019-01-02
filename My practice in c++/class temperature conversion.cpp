#include<iostream>
using namespace std;
class temp	
{
	private:
		float f,c;
	public:
		temp()
		{
			f=0;
			c=0;
		}
		void ctof()
		{
			cout<<"Enter temperature in celsius to convert it in farenheit:\n";
			cin>>c;
			f=((c*9)+32)/5;
			cout<<"\nTemperature in farenheit is :"<<f;
		}
		
		void ftoc()
		{
			cout<<"Enter temperature in farenheit to convert it in celsius:\n";
			cin>>f;
			c=(5*(f-32))/9;
			cout<<"\nTemperature in celsius is :"<<c;
		}
};
main()
{
	temp t1,t2;
	t1.ftoc();
	t2.ctof();
	
	
}
