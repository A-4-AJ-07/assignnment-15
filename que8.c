#include<stdio.h>
int main()
{
	int a[10],i;
	int freq[100]={0};
	printf("Enter the element of an array less than 100:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		freq[a[i]]++;
	}
	for(i=0;i<100;i++)
	{   
	      if(freq[i]==1)
	  printf("%d occurs %d times.\n",i,freq[i]);	
	}
}