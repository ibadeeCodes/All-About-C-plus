#include<iostream>
using namespace std;
class distance
{
	private:
		int feets,inches;
	public:
		distance():feets(0),inches(0)
		{
			
		}
		void set(int ft,float in)
		{
			ft=feets;
			in=inches;
		}
		void show()
		{
			cout<<feets<<"'"<<inches<<"-"<<endl;
		}
	    void set1()
	    {
	    	cout<<"enter feets"<<endl;
	    	cin>>feets;
	    	cout<<"enter inches"<<endl;
	    	cin>>inches;
		}
		void add(distance,distance);
};
void distance::add(distance x, distance y)
{
inches = x.inches + y.inches; //add the inches
feets = 0; //(for possible carry)
if(inches >= 12.0) //if total exceeds 12.0,
{ //then decrease inches
inches -= 12.0; //by 12.0 and
feets++; //increase feet
} //by 1
feets += x.feets + y.feets; //add the feet
}
main()
{
	distance d1,d2,d3;
	d1.set(7,5);
	d2.set1();
	d3.add(distace d1,distance d2);
	
	cout<<" "<<d1.show();

	cout<<" "<<d2.show();

	cout<<" "<<d3.show();
}
