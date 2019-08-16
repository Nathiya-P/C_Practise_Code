#include <stdio.h>
int sum_dig(int);
void main()
{
	int num=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	num=sum_dig(num);
	printf("Sum of its digits: %d \n",num);
} 
int sum_dig(int n)
{	
	if (n==0)
		return 0;
	else
		return ((n%10) + sum_dig(n/10)); 
}

