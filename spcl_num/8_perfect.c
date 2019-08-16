#include <stdio.h>
void main()
{
	int num=0,sum=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	for(int i=1; i<num; i++)
	{
		if (0 == (num%i))
			sum+=i;
	}
	if (sum==num)
		printf("%d is a perfect number\n",num);
	else
		printf("%d is not a perfect number\n",num);
} 
