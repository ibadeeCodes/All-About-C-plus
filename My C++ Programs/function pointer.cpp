#include<iostream>
#include<stdlib.h>
using namespace std;
int add(int x,int y)
{
	return x+y;
}
main()
{
	int *function_ptr(int,int)=NULL;
	cout<<"now"<<endl;
	function_ptr=&add;
	int result=(*function_ptr)(7,9);
	func_ptr = division;
result = (*function_ptr)(9, 5);

return 0;
	cout<<"result is "<<result;
	
}
