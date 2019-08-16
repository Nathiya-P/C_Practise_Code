#include <stdio.h>
void main()
{
	int num[10],count=0,sum=0,i=0;
	printf("Enter the number of elements\n");
	scanf("%d",&count);
	printf("Enter the elements\n");
	for(i=0;i<count;i++)
		scanf("%d",&num[i]);
	for(i=0;i<count;i++)
		sum += num[i];
	printf("Sum:%d\n",sum);
	if (sum != 0)
		printf("Average:%d\n",(sum/count));
} 
