#include <stdio.h>
/* (n1^n2) provides an intermediate value
    This intermediate value can be xor ed with one value to get other
    eg. n2 = (n1^n2)^n1 or n1=(n1^n2)^n2 */
	
void main()
{
	int n1=0,n2=0;
	printf("Enter two numbers to swap\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	n1=n1^n2;
	n2=n1^n2;
	n1=n1^n2;
	printf("After swapping n1:%d, n2:%d\n",n1,n2);
} 
