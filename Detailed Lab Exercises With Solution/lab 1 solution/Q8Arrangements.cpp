#include<iostream>
using namespace std;
main()
{
    int i,chair,guest;
	double fact=1;
    cout<<"enter number of guests:"<<endl;
    cin>>guest;
    cout<<"enter number of chairs"<<endl;
    cin>>chair;
    for(i=guest;i>=chair-1;i--)
    {
    	fact=fact*i;
	}
	cout<<"total arrangements are:"<<fact;
}
