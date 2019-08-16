#include <stdio.h>
union number 
{
	int n1;
	float n2;
};
void main()
{
	union number num;
	printf("Enter a number\n");	
	scanf("%d",&num.n1);
	printf("The number is %d\n",num.n1);
	printf("Enter a number\n");	
	scanf("%f",&num.n2);
	printf("The number is %f\n",num.n2);
	printf("The number is %d\n",num.n1);
} 
