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
	int i,j,temp;
	for(i=0;i<n;i++)
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
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	    
}