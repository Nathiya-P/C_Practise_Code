#include <stdio.h>
int sum(int);
void main()
{
	int num=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	num=sum(num);
	printf("Sum : %d \n",num);
}
int sum (int n)
{
	if (n==0)
		return 0;
	else
		return (n+sum(n-1));
} 
