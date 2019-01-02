#include<iostream>
using namespace std;
class add
{
public:
float x,y,sum;
public:
add():x(0),y(0),sum(0)
{
	
}
add(float a,float b): x(a),y(b)
{ float sum;
sum=a + b;
	cout<<sum;
	}	
void get_values()
{
	cout<<"enter value of x:";
	cin>>x;
	cout<<"enter value of y:";
	cin>>y;
}
void display()
{
	cout<<"x="<<x;
	cout<<"y="<<y;
	sum=x+y;
	cout<<sum;
}
};
main()
{
	add dis1,dis2,dis3;
	dis1(23,45.4);
	dis2(dis1);
	dist3=dis2;
	dis1.display();
	dis2.display();
	dis3.display();
}
