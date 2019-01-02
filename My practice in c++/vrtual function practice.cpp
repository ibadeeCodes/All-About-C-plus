#include <iostream>
using namespace std;
class Base //base class
{
public:
 virtual void show() //virtual function
{ cout << "base\n"<<endl; }
  void print()
{
	cout<<"im base"<<endl;
}
};
class Derv1 : public Base //derived class 1
{
public:
void show()
{ Base::  show(); 
cout << "drv 1\n"; }
void print()
{
	cout<<"im derive 1"<<endl;
}
};
class Derv2 : public Base //derived class 2
{
public:
void show()
{ cout << "DRV 2\n"; }
};
int main()
{

Derv1 dv1; //object of derived class 1
Derv2 dv2; //object of derived class 2
Base* ptr; //pointer to base class
ptr = &dv1; //put address of dv1 in pointer
ptr->show(); //execute show()
//ptr = &dv2; //put address of dv2 in pointer
//ptr->show(); //execute show()
//b1.show();
//dv1.show();
//dv2.show();
ptr->print();
return 0;
}
