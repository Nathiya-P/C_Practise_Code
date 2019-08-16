#include<stdio.h>
void main()
{
	int num=0, dec=0, temp=0,val=1;
	printf("Enter the number in binary format (0's and 1's)\n");
	scanf("%d",&num);
	for(int i = 0;num>0; i++)
	{
		temp=num%10;
		dec = dec + ( temp * val);
		num = num/10;
		val = val * 2;
	}
	printf("The decimal value is %d\n",dec);
}
