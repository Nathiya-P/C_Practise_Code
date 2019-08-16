#include<stdio.h>
void main()
{
	int num=0, base1=1,base=1,rem=0,rem1=0,oct=0,oct1=0;	
	printf("Enter the binary number (in 0s and 1s):\n");
	scanf("%d",&num);
	while (num > 0)
	{
		rem = num%1000;
		base = 1;
		rem1 = 0;
		oct1 = 0;
		while (rem>0)
		{
			rem1 = rem%10;
			oct1 = oct1 + rem1 * base;
			base = base * 2;
			rem = rem/10;
		}
		oct = oct + oct1 * base1;
		num= num/1000;
		base1 = base1*10;
	}
	printf("\nThe octal equivalent:%d\n",oct);
}
