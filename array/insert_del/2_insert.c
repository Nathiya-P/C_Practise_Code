#include <stdio.h>
#define max 20
void main()
{
	int arr[max],i=0,num=0,position=0,flag=0,temp=0;
	for(i=0;i<max;i++)
		arr[i]=i+1;
	printf("Enter the element to be inserted\n");
	scanf("%d",&num);
	printf("Enter the position less than 20\n");
	scanf("%d",&position);
	for(i=0;i<max;i++)
	{
		if(position==(i+2))
		{
			flag=1;
			temp = arr[i];
			arr[i]=num;
				
		}
		if(flag == 1)
		{
			num = temp;
			temp=arr[i];
			arr[i]=num;
		}
	}
	printf("The elements in the array are\n");
	for(i=0;i<max;i++)
		printf("%d ",arr[i]);
	printf("\n");
} 
