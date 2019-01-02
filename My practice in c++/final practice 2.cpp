#include<iostream>
using namespace std;
class time
{
	public:
		int h,m,s;
	public:
		time()
		{
			h=0;
			m=0;
			s=0;
		} 
		void get()
		{
			cout<<"enter hours :"<<endl;
			cin>>h;
			cout<<"enter minutes"<<endl;
			cin>>m;
			cout<<"enter seconds:"<<endl;
			cin>>s;
		}
		void show()
		{
			cout<<h<<"h:"<<m<<"m:"<<s<<"s"<<endl;
		}
		time operator +(time t1)
		{
			time temp;
			temp.h=this->h+t1.h;
			temp.m=this->m+t1.m;
			if(temp.m>60)
			{
				temp.h=temp.h+1;
				temp.m=temp.m-60;
			}
			temp.s=this->s+t1.s;
			if(temp.s>60)
			{
				temp.m=temp.m+1;
				temp.s=temp.s-60;
			}
			return temp;
		}	
};
main()
{
	time obj1,obj2,obj3;
	obj1.get();
	obj2.get();
	obj3=obj1+obj2;
	obj3.show();
}
