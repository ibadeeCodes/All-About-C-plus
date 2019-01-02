#include<iostream>
using namespace std;
class rectangle{
	private:
	float length,width,height,vol,a;
	int opt;
	public:
		rectangle():length(1),width(1)
		{
		}
		void volume()
		{
			/*cout<<"enter length,width and height:";
			cin>>length>>endl;
			cin>>width>>endl;
			cin>>height>>endl;*/
			vol=length*width*height;
			cout<<"volume is :"<<vol;
		}
		void area()
		{
			/*cout<<"enter length:";
			cin>>length>>endl;
			cout<<"enter width";
			cin>>width;*/
			a=length*width;
			cout<<"the area is :"<<a;
		}
		void set()
		{
			cout<<"enter length:";
			cin>>length;
			cout<<"enter width";
			cin>>width;
			cout<<"enter height";
			cin>>height;
			if(length>0.0&&length<20.0&&width>0.0&&width<20.0)
			{
				cout<<"select the above:\n1)area.\n2)volume.";
				cin>>opt;
				switch(opt)
				{
				case 1:
				area();
				break;
				case 2:
				volume();
				break;
				default:
					cout<<"enter a valid choice:";
			}
			}
			else
			{
				cout<<"height or width is less than 0 or greater than 20";
			}
		}
};
main()
{
	rectangle r1;
	r1.set();
}
