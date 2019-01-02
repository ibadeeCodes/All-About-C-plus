//SEARCH an element in pakistanzindabad.//
#include<iostream>
using namespace std;
main()
{
 char str[20]="pakistan zindabad";
 char a;
 char *p;
 cout<<str<<endl;
    cout<<"search an element in the following string";
    cin>>a;
 while(*p!='\0')
 {
 	if(*p==a)
 	{
 		cout<<a<<"is found at:"<<str<<endl;
 		break;
	 }
	 else
	 {
	 	
	 }
 *p++;	
 	
}
	
	
	
	
} 
