#include <stdio.h>
int bin(int);
void main()
{
	int num=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	num=bin(num);
	printf("Binary equivalent: %d \n",num);
}
int bin(int n)
{
	if(n==1)
		return 1;
	else
		return ((n%2)+10*bin(n/2));
} 
