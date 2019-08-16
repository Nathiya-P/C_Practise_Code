#include <stdio.h>
void main()
{
	int arr[]={19,2,3,4,5,6,11,12,13,14,15,-10,17,19,2};	
	int i=0,size=sizeof(arr)/sizeof(int),flag=0,num=0;
	printf("The elements in the array are\n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
	printf("Enter the element to be deleted\n");
	scanf("%d",&num);
	for(i=0;i<(size);i++)
	{		
		if((num == arr[i])&&(!flag))
		{
			flag++;
		}
		if(flag>0)
		{
			if(num != arr[i+flag])
			{
				if((i+flag)< size)
				arr[i]=arr[i+flag];
			}
			else
			{
				flag++;
				if((i+flag)< size)
				arr[i]=arr[i+flag];
			}
			
		}
	}
	size=size-flag;
	printf("The elements in the array are\n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
} 
