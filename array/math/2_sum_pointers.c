#include <stdio.h>
#include <malloc.h>
void main()
{
	int count=0,sum=0,i=0;
	int *num;
	printf("Enter the number of elements\n");
	scanf("%d",&count);
	num=(int*)malloc(count*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<count;i++)
		scanf("%d",num+i);
	for(i=0;i<count;i++)
		sum=sum+ *(num+i);
	printf("Sum:%d\n",sum);
	free(num);
} 
