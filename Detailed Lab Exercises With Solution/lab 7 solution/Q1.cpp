#include<iostream>
using namespace std;
class employee
{
	protected:
		string name;
		string code;
	public:
		employee(string n,string c):name(n),code(c)
		{
				
		}				
};
class consultant:virtual public employee
{
	protected:
		int years_of_exp;
	public:
		consultant(int yoe,string n,string c):employee(n,c),years_of_exp(yoe)
		{
			
		}	
};
class manager:virtual public employee
{
	protected:
		int no_of_teams;
	public:
		manager(int noot,string n,string c):employee(n,c),no_of_teams(noot)
		{
			
		}	
};
class consultantmanager:public consultant,public manager
{
	public:
		consultantmanager(string n,string c,int yoe,int noot):
		employee(n,c),consultant(yoe,n,c),manager(noot,n,c)
		{
			          
		}
		void display()
		{
			cout<<"name:"<<name<<endl;
			cout<<"code:"<<code<<endl;
			cout<<"Years of experience:"<<years_of_exp<<endl;
			cout<<"number of teams:"<<no_of_teams<<endl;
		}
};
main()
{
	consultantmanager obj("IBAD","22092",3,4);
	obj.display();
	return 0;
}
