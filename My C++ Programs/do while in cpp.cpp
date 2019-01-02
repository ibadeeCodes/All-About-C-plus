#include<iostream>
#include<string>
using namespace std;
main()
{
	string str;
	do
	{
		cout<<"enter any string "<<endl;
		getline(cin,str);
		cout<<"you entered :"<<str<<endl;
	}
	while(str!="goodbye");
}
