#include<stdio.h>
void main()
{
	int num=0, rem=0, bin_no=0, base=1, count =0;
	printf("Enter a decimal number\n");
	scanf("%d",&num);
	while (num>0)
	{
		rem = num % 2;
		if (rem == 1)
		{
			count++;
		}
		bin_no = bin_no + rem * base;
		num = num / 2;
		base = base * 10;
	}
	printf("The binary equilvalent: %d and number of 1's:%d\n",bin_no,count);
}
