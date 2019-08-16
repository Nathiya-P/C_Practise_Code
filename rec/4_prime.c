#include <stdio.h>
int prime(int,int);
void main()
{
	int num=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	num=prime(num,num/2);
	if (num == 1)	
		printf("Prime number\n");
	else
		printf("Not a prime number\n");
}
int prime(int num, int check) 
{
	if (check == 1)
		return 1;
	else
	{   
		if ((num % check) == 0)
			return 0;
		else
			return prime (num,--check);
	}
}
