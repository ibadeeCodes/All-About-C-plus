#include<iostream>
using namespace std;
main()
{
	int list[20],i,j,n,ins,ind;
	cout<<"Enter total number of elements in list:"<<endl;
	cin>>n;
	cout<<"Enter elements of the list:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>list[i];
	}
	cout<<"Enter the element to be inserted:"<<endl;
	cin>>ins;
	cout<<"Enter the index where to be inserted"<<endl;
	cin>>ind;
	 for(i=0;i<n;i++)
	 {
	 	if(list[i]==list[ind])
	 	{
	 		list[i]=ins;
		 } 
	 }
	cout<<"The updated list is:"<<endl;
	for(i=0;i<n;i++)
	{
	 cout<<list[i]<<endl;
	}

}
