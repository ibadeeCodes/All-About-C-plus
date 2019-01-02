//toll bothh//
#include<iostream>
using namespace std;
class tb{
	public:
		double totalmoney;
		int totalvehicles,n;
		int van,car,bike;
		public:
			tb () 
			{
            	totalmoney=0;
				totalvehicles=0;
				bike=0;
				car=0;
				van=0;
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
            	cout<<"The expected money is:"<<endl;
            	cout<<"Total vehicles:"<<totalvehicles<<endl;
            	cout<<"Total money:"<<totalmoney<<endl;
            	cout<<"Total cars:"<<car<<endl;
            	cout<<"Total bikes:"<<bike<<endl;
            	cout<<"Total van:"<<van<<endl;
			}
		void    notpayingcar()
		    {
		    	cout<<"Enter number of cars didnt paid:";
		    	cin>>n;
		    	cout<<"Unpaid cars:"<<(n*10)-totalmoney<<endl;
			}	
		void    notpayingvan()
		    {
		    	cout<<"Enter number of vans didnt paid:";
		    	cin>>n;
		    	cout<<"Unpaid vans:"<<(n*20)-totalmoney;
			}	
			
		void    notpayingbike()
		    {
		    	cout<<"Enter number of bikes didnt paid:";
		    	cin>>n;
		    	cout<<"Unpaid bikes:"<<(n*5)-totalmoney;
		    	
			}
		void    display2()
            {
            	cout<<"The actual money is:"<<endl;
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
	cout<<"Enter 4 to find the expected money:"<<endl;
	cout<<"Enter 5 to find how many cars didnt paid\n";
	cout<<"Enter 6 to find how many bikes didnt paid\n";
	cout<<"Enter 7 to find how many vans didnt paid\n";
	cout<<"Enter 8 for total calculation:"<<endl;
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
		else if(a==4)
		{
			t1.display();
		}		
		else if(a==5)
		{
			t1.notpayingcar();
		}
		else if(a==6)
		{
            t1.notpayingbike();
		}
		else if(a==7)
		{
			t1.notpayingvan();
		}
		else
		{	
			break;
		}
	}
	t1.display2();
}
