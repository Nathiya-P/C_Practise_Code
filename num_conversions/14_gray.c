#include <stdio.h>
void main()
{
	int num=0, rem1=0,rem2=0,base=1,value=0;
	printf("Enter a binary number (os and 1s)\n");
	scanf("%d",&num);
	while (num>0)
	{	
		if (num != 1)
		{
			rem1 = num%10;
			rem2 = ((num%100)/10)-(rem1/10);
			value = value + (rem1^rem2) * base;
			base *= 10;
		}
		else
			value += base;
		num = num/10;
	}
	printf("Gray equivalent: %d\n",value);
} 
