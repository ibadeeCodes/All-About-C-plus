#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{
	ofstream out;
	out.open("ibad.dat");
	getch();
	out<<" hello ibadee";
	getch();
	out.close();
	
}
