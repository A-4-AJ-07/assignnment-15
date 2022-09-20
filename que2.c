#include<stdio.h>
int print(int arr[],int n);
int main()
{
	int a[10],temp;
	printf("Enter the element of array:");
	temp=print(a,10);
	printf("the smallest number in array is %d",temp);
}
int print(int arr[],int n)
{
	int i,min;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[1];
	
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	return min;
}