#include <stdio.h>
void main()
{
	int num=0, rem=0, base=1, sum=0;
	printf("Enter the number\n");	
	scanf("%d",&num);
	while (num >0)
	{	
		rem = num%8;
		sum = sum + rem * base;
		base = base * 10;
		num=num/8;
	}	
	printf("Octal conversion:%d\n",sum);
} 
