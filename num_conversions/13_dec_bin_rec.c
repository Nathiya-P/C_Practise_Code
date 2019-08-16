#include <stdio.h>
void bin(int);
void main()
{
	int num=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("Binary equivalent : ");
	bin(num);
	printf("\n");
} 
void bin(int num)
{
	int rem=0;
	rem = num%2;
	num /= 2;
	if (num > 0)
		bin(num);
	printf("%d", rem);
}
