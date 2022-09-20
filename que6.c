#include<stdio.h>
int print(int arr[],int n);
int main()
{
	int a[10],temp;
	printf("Enter the element of array:");
	print(a,10);
	
}
int print(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	

	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	
}