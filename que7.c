#include<stdio.h>
int duplicate(int arr[],int n);
int main()
{
	int a[10],temp;
	printf("Enter the element of array:");
	duplicate(a,10);
}
int duplicate(int arr[],int n)
{
	int i,j,count;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	count=0;
	for(i=0;i<n;i++)
	{    
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
		  {
			  	count++;
			break;}
		}
	
	}
	printf("Total number of duplicate is:%d",count);
}
