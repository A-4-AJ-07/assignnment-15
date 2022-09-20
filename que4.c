#include<stdio.h>
int sort(int arr[],int n);
int main()
{
	int arr[10];
	printf("Enter the element of an array:");
	sort(arr,10);
}
int sort(int arr[],int n)
{
	int i,r;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Before arranging:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter the value after which arrangement required:");
	scanf("%d",&r);
	
	for(i=r;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<r;i++)
	{
		printf("%d ",arr[i]);
	}
 } 