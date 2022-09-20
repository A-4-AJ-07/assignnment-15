#include<stdio.h>
int duplicate(int arr[],int n);
int main()
{
	int arr[10];
	printf("enter the element of array:");
	printf("First adjacent duplicate in array is %d",duplicate(arr,10));
}
int duplicate(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{    
	    if(arr[i]=arr[i+1])
		return arr[i];
	}
	
}