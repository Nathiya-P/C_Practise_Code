#include <stdio.h>
#include <math.h>
/* Armstrong no is generally n digit base b number = sum of its digits raised to power n.
Mostly 3 digit numbers are used if you want to use n digit number, count the digit first and then 
the rest*/

int num_digit(int num)
{
	int digit=0;
	while(num>0)
	{	
		num=num/10;
		digit++;
	}
	return digit;
}
void main()
{
	int num=0,ndigit=0,rem=0,sum=0,temp=0;
	printf ("Enter a number\n");
	scanf("%d",&num);
	temp=num;
	ndigit=num_digit(num);
	while (num>0)
	{
		rem=num%10;
		sum += pow(rem,ndigit);
		num=num/10;
	}
	if(sum==temp)
		printf("%d is Armstrong number\n",temp);
	else
		printf("%d is not Armstrong number\n",temp);
	
} 
