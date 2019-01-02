//toll bothh;
#include<iostream>
using namespace std;
class tb{
	public:
		double totalmoney;
		int totalvehicles;
		int van,car, bike;
		public:
			tb () 
			{
				totalmoney=0;
				totalvehicles=0;
			}
		void	payingcar()
			{
				totalmoney=totalmoney+10;
				totalvehicles++;
				car++;
			}
		void	payingvan()
			{
				totalmoney=totalmoney+20;
				
				totalvehicles++;
				van++;
			}
			
		void	payingbike()
			{
				totalmoney=totalmoney+5;
				totalvehicles++;
				bike++;
			}
        void    display()
            {
            	cout<<"Total vehicles:"<<totalvehicles<<endl;
            	cout<<"Total money:"<<totalmoney<<endl;
            	cout<<"Total cars:"<<car<<endl;
            	cout<<"Total bikes:"<<bike<<endl;
            	cout<<"Total van:"<<van<<endl;
			}
};
main()
{
	tb t1;
	cout<<"Enter 1 for car\n";
	cout<<"Enter 2 for bike\n";
	cout<<"Enter 3 for van\n";
	cout<<"Enter 4 for total calculation:"<<endl;
	//cout<<"Enter 4 to find how many cars didnt paid\n";
	//cout<<"Enter 5 to find how many bikes didnt paid\n";
	//cout<<"Enter 6 to find how many vans didnt paid\n";
	int a=1;
	while(a!=4)
	{
		cin>>a;
		if(a==1)
		{
			t1.payingcar();
		}
		else if(a==2)
		{
			t1.payingbike();
		}
		else if(a==3)
		{
			t1.payingvan();
		}
		else
		{
			break;
		}
	}
	t1.display();
}
