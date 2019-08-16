#include <stdio.h>
int gray(int n)
{
	int rem1=0,rem2=0;
	if (!n)
		return 0;
	else
	{	
		rem1=n%10;
		rem2=((n%100)/10)-(rem1/10);
		if ((rem1 && !rem2) || (!rem1 && rem2))
			return (1+10*gray(n/10));
		else
			return (10*gray(n/10));
	}
	   
} 
void main()
{
	int num=0;
	printf("Enter a binary number (0s and 1s)\n");
	scanf("%d",&num);
	num=gray(num);
	printf("Gray equivalent: %d\n",num);
} 
