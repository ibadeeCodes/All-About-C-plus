#include<iostream>
using namespace std;
#define totalmoney 0.50
class tollbooth{
	
	public:
		int total_car;
		double total_money;
		int n;
	public:	
		tollbooth()
		{
			total_car=0;
			total_money=0;
		}
		void paying_car()
		{
			total_money=total_money+0.5;
			total_car++;		
		}
		void display(){
			
			cout <<"Total money collected was "<<total_money<<endl;
			cout <<"total cars entered were "<<total_car;
		}
		
		void notpaying()
		{
			cout <<"Enter how many cars didnot paid"<<endl;
			cin >>n;
			cout <<"\n the total money left was "<<(n*0.5)-total_money;
		}
};
main()
{	
	tollbooth t1;
	int a=1;
	cout<<"Press 1  if Car enter "<<endl<<"Press 2 if car stop entering =";
	while(a!=2)
	{
	cin>>a;		
		if (a==1)
		{
			t1.paying_car();
		}
	}
		t1.display();			
        t1.notpaying();	
}

