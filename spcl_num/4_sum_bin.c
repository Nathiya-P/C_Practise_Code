#include <stdio.h>
int bin_dec(int n);
int dec_bin(int n);
void main()
{
	int n1=0, n2=0,sum=0;
	printf("Enter two binary numbers (as 0s and 1s)\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	sum = bin_dec(n1) + bin_dec(n2);
	printf("The sum in dec is %d\n",sum);
	sum = dec_bin(sum); 
	printf("sum is binary is %d\n",sum);
	
}
int bin_dec(int num)
{	
	int rem=0, base=1, dec=0;
	printf("Dec number of %d is ",num);
	while (num>0)
	{
		rem= num%10;
		num=num/10;
		dec = dec + rem * base;
		base = base * 2;		
	}
	printf("%d\n",dec);
	return dec;
} 
int dec_bin(int num)
{
	int rem=0,bin=0,base=1;
	while(num>0)
	{
		rem=num%2;
		bin = bin + rem * base;
		num=num/2;
		base = base*10;
	}	
	return bin;
}

