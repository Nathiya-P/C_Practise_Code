#include <stdio.h>
#include <malloc.h>
void main()
{
	int count=0,i=0;
	int *num1,*num2,*num3;
	printf("Enter the number of elements\n");
	scanf("%d",&count);
	num1=(int*)malloc(count*sizeof(int));
	num2=(int*)malloc(count*sizeof(int));
	num3=(int*)malloc(count*sizeof(int));
	printf("Enter the elements of array1\n");
	for(i=0;i<count;i++)
		scanf("%d",num1+i);
	printf("Enter the elements of array2\n");
	for(i=0;i<count;i++)
		scanf("%d",num2+i);
	for(i=0;i<count;i++)
		*(num3+i)=*(num1+i)+ *(num2+i);
	printf("Resulting array:\n");
	for(i=0;i<count;i++)
		printf("%d ",*(num3+i));
	printf("\n");
	free(num1);
	free(num2);
	free(num3);
} 
