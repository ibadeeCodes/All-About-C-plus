#include<iostream>
using namespace std;
class base
{
public:
int count;
public:
base()
{
	count=0; 
	}	
	void getcount()
	{
		count=count+1;
	}
	void show()
	{
		cout<<"count="<<count;
	}
};
class derived:public base
{
	public:
		void getcount()
		{
			count++;
			if (count>3)
			{
				return base();
			}
		}
		
};
main()
{
	derived d1;
	d1.getcount();
	d1.getcount();
	d1.getcount();
	d1.getcount();
	d1.show();
}
