/*assending order bubble sort*/
#include<stdio.h>
#include<conio.h>
void bubble_sort(int arr[],int);
main()
{
	int i;
	int arr[]={23,1,5,56};
	bubble_sort(arr,4);
	for(i=0;i<=3;i++)
	{
		printf(" %d",arr[i]);
	}
}
void bubble_sort(int arr[],int n)
{
	int round,i,temp;
	for(round=1;round<=n;round++)
	{
		for(i=0;i<=n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
}
