#include<iostream>
using namespace std;
class patient
{
	public:
		string name;
		string date;
		string disease;
		string discharge_date;
	public:
		patient()
		{
			name="anonymous";
			date="not mentioned";
			disease="not mentioned";
			discharge_date="not mentioned";
		}
		void get()
		{
			cout<<"enter name of patient"<<endl;
			cin>>name;
			cout<<"enter date :"<<endl;
			cin>>date;
			cout<<"enter disease of patient:"<<endl;
			cin>>disease;
			cout<<"enter discharge date"<<endl;
			cin>>discharge_date;
		}
		void display()
		{
			cout<<"name of patient:"<<name;
			cout<<"\ndate :"<<date;
			cout<<"\ndisease:"<<disease;
			cout<<"\ndischarge date:"<<discharge_date;
			cout<<"\n";
		}
};
class age:public patient
{
	public:
		int age_of_patient;
	public:
		age()
		{
			age_of_patient=0;
		}
		void getage()
		{
			cout<<"enter age of patient:"<<endl;
			cin>>age_of_patient;
		}
		void dispage()
		{
			cout<<"age of patient is:"<<age_of_patient<<endl;
		}
};
main()
{
	age a1;
	a1.get();
	a1.getage();
	a1.display();
	a1.dispage();
}
