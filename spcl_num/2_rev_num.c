#include <stdio.h>
void main()
{
	int num=0, rem=0, rev=0, base=1;
	printf("Enter a number\n");
	scanf("%d",&num);
	while (num > 0)
	{
		rem = num % 10;
		num = num / 10;
		rev = rev * 10 + rem;
	}
	printf("Reversed no:%d\n",rev);
} 
