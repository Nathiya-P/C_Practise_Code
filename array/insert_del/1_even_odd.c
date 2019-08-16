#include <stdio.h>
#define max 20
void main()
{
	int arr[max],even[max],odd[max];
	int i=0,even_i=0,odd_i=0;
	for(i=0;i<max;i++)
		arr[i]=i+1;
	for(i=0;i<max;i++)
	{
		if((arr[i]%2)==0)
		{
			even[even_i++]= arr[i];
		}
		else
		{
			odd[odd_i++]=arr[i];
		}
	}
	printf("The elements in even array is\n");
	for(i=0;i<even_i;i++)
		printf("%d ",even[i]);
	printf("\n");
	printf("The elements in odd array is\n");
	for(i=0;i<odd_i;i++)
		printf("%d ",odd[i]);
	printf("\n");
} 
