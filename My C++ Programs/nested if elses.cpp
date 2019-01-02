#include<iostream>
using namespace std;
main()
{
	int age;
	char gender;
	cout<<"enter age :"<<endl;
	cin>>age;
	cout<<"enter gender:"<<endl;
	cin>>gender;
	if(age>=13&&age<=19)
	{
		if(gender=='m'||gender=='M')
		{
			cout<<"He is teenage boi";
		}
		else if(gender=='f'||gender=='F')
		{
			cout<<"She is a teenage gal";
	    }
	}
	else if(age>0&&age<=12)
	{
		if(gender=='M'&&gender=='m')
		{
			cout<<"He is a baby boi";
		}
		else
		{
			cout<<"She is a baby gal";
		}
	}
	else if(age>=20&&age<=55)
	{
		if(gender=='M'&&gender=='m')
		{
			cout<<"He is a man";
		}
		else
		{
			cout<<"She is a woman";
		}
	}
	else if(age>=56&&age<=80)
	{
		if(gender=='M'&&gender=='m')
		{
			cout<<"He is an old man";
		}
		else
		{
			cout<<"She is a old woman";
		}	
	}
	else
	{
		if(gender=='M'&&gender=='m')
		{
			cout<<"Ye kabhi nhe maarega bhudda";
		}
		else
		{
			cout<<"Ye kabhi nhe maregi bhuryaa";
		}
	}
}
