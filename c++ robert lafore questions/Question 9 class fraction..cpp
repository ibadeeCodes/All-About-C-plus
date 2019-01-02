#include<iostream>
using namespace std;
class fraction
{
   	private:
   	int den,num,x;
   	public:
   		fraction()
   			{
   				num=0;
   				den=0;
			}
		void set()
			{
				cout<<"enter numerator:";
				cin>>num;
				cout<<"enter deniominator:";
				cin>>den;
			}
		void display()
			{
			    cout<<num<<"/"<<den;
			}
		fraction operator + (fraction f)
			{
				fraction temp;
				if(den==f.den)
				{
					temp.num=(1*num)+(1*f.num);
					temp.den=den;
					return temp;
				}
				else if(den==f.den==num==f.num)
				{
					temp.num=2;
					temp.den=1;
					return temp;
				}
				else
				{
					x=(den*(f.den));
				    temp.num=((x/den)*num)+((x/(f.den))*(f.num));
				    temp.den=x;	
				    return temp;
				}
			}
};
main()
{
	fraction f1,f2,f3;
	f1.set();
	f2.set();
	f3=f1+f2;
	f3.display();
}
