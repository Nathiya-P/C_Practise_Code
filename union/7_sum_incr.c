#include <stdio.h>
void main()
{
	int num=0,sum=0,rem=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	while(num>0)
	{
		sum += ((num%10)+1);
		num /= 10;

	}
	printf("Result:%d\n",sum);
} 
