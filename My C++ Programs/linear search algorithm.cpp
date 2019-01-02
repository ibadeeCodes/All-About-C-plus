#include<iostream>
int linear(int [],int,int);
using namespace std;
main()
{
	int arr[10]={10,34,23,4,5,3,33,32,34,45},i,j;
	j=linear(arr,5,23);
	cout<<j;
}
int linear(int arr[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	return -1;
	}
}
