#include<stdio.h>
void main()
{
	int num=0, base=1, rem=0;
	int dec =0;
	printf("Enter a number in binary (0s and 1s)\n");
	scanf("%d",&num);
	while(num>0)
	{
		rem = num%10;
		dec = dec + rem * base;
		base = base * 2;
		num = num/10;
	}
	printf("Hex equivalent:%X\n",dec);
	printf("Octal equivalent:%o\n",dec);
}
