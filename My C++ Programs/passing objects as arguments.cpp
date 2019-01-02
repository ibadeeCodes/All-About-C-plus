#include<iostream>
using namespace std;
class student
{
	private:
		int c,cpp,asmb;
	public:
	void input()
	{
		cout<<"enter c marks:"<<endl;
		cin>>c;
		cout<<"enter cpp marks"<<endl;
		cin>>cpp;
		cout<<"enter asmb marks:"<<endl;
		cin>>asmb;
		}	
	void display()
	{
		cout<<"c marks are :"<<c;
		cout<<"cpp marks are"<<cpp;
		cout<<"asmb marks are"<<asmb;
		}
	int add(student mid,student final)	
	{
		c=mid.c+final.c;
		cpp=mid.cpp+final.cpp;
		asmb=mid.asmb+final.asmb;
		}	
};
main()
{
	student mid,final,total;
	cout<<"enter marks for mid term"<<endl;
	mid.input();
	cout<<"enter marks for final"<<endl;
	final.input();
	total.add(mid,final);
	total.display();
}
