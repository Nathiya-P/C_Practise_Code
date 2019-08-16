#include <stdio.h>
void main()
{
	int arr[]={19,2,3,4,5,6,11,12,13,14,15,-10,17,19,2};	
	int i=0,size=sizeof(arr)/sizeof(int),num=0;
	printf("The elements in the array are\n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
	num=arr[0];
	for(i=0;i<(size-1);i++)
		arr[i]=arr[i+1];

	arr[size-1]=num;	
	printf("The elements in the array are\n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
} 
