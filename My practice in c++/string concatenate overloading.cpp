#include<iostream>
#include<string>
using namespace std;
class string
{
private:
char str[100];
public:
void input()
{
cout<<"enter the string\n";
gets(str);
}
string operator+(string s)
{
string temp;
strcat(str,s.str);
strcpy(temp.str,str);
return(temp);
}
void output()
{
cout<<"the string is\n";
cout<<str;
}
};
main()
{
	string s1,s2,s3;
	s1.input();
	s2.input();
	s3=s1+s2;
	s3.output();
}

