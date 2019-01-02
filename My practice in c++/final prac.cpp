#include<iostream>
using namespace std;
class sum
{
	int a,b,total;
	public:
		sum()
		{
			a=0;
			b=0;
		}
		void get()
		{
			cout<<"enter a"<<endl;
			cin>>a;
			cout<<"enter b"<<endl;
			cin>>b;
		}
		void display()
		{
			total=a+b;
			cout<<"sum is "<<total<<endl;		
		}
		sum operator + (sum s)
		{
			sum temp;
			temp.a=this->a+ s.a;
			temp.b=this->b+ s.b;
			return temp;
		}
};
main()
{
	sum s1,s2,s3;
	s1.get();
	s2.get();
	s3=s1+s2;
	s3.display();
}

