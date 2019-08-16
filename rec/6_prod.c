#include <stdio.h>
int prod(int,int);
void main()
{
	int n1=0,n2=0;
	printf("Enter two numbers\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	n1=prod(n1,n2);
	printf("Multiplied value: %d \n",n1);
}
int prod (int m, int n)
{
	if ((m==0)||(n==0))
		return 0;
	else if (n == 1)
		return m;
	else
		return (m + prod(m,--n));	
}  
