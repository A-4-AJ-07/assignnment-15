#include<stdio.h>
int print(int arr[],int n);
int main()
{
	int a[10],temp;
	printf("Enter the element of array:");
	temp=print(a,10);
	printf("the greatest number in array is %d",temp);
}
int print(int arr[],int n)
{
	int i,max;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=0;

	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	return max;
}