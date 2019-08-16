#include <stdio.h>

struct com_no
{	
	int real;
	int imaginery;
};

typedef struct com_no cn;

void main()
{
	cn a,b,c;
	printf("Enter real and imaginary part for complex number1\n");
	scanf("%d",&a.real);
	scanf("%d",&a.imaginery);
	printf("Enter real and imaginary part for complex number2\n");	
	scanf("%d",&b.real);
	scanf("%d",&b.imaginery);
	c.real = a.real + b.real;
	c.imaginery = a.imaginery + b.imaginery;
	printf("The result is %d+%di\n",c.real,c.imaginery);
} 
