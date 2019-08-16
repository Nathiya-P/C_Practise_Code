#include <stdio.h>
void main()
{
	int arr[]={45,34,56,8,78,-9,10,1},i=0,j=0,k=0;
	int size=sizeof(arr)/sizeof(int),temp=0;
	for(i=0;i<size;i++)
	printf("%d ",arr[i]);
	printf("\n");
	for(i=0;i<(size-1);i++)
	{
		for(j=0;j<(size-1-i);j++)
		{
			if(arr[j]>arr[j+1])
			{
				
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		
		for(k=0;k<size;k++)
			printf("%d ",arr[k]);
		printf("\n");
	}
	printf("Elements in ascending order are\n");
	for(i=0;i<size;i++)
	printf("%d ",arr[i]);
	printf("\n");
} 
