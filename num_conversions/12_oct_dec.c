#include <stdio.h>
void main()
{
	int num=0, base=1, rem=0,value=0;
	printf("Enter the octal number\n");
	scanf("%d",&num);	
	while (num>0)
	{
		rem=num%10;
		if (rem > 7)
		{
			printf("Invalid octal number\n");return;
		}
		value += (rem * base);
		base *= 8;
		num /= 10;
	}
	printf("Decimal equivalent:%d\n",value);
} 
