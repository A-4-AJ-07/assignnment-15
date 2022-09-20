#include<stdio.h>
int array(int arr[],int n);
int main()
{
	int arr[20];
	printf("Enter the element of 1st array:");
	array(arr,10);
}
int array(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n/2;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element of 2nd array:");
	for(i=n/2;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nSorting after merging:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}