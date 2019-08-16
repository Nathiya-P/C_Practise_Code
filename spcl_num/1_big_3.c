#include<stdio.h>
void main()
{
	int n1=0,n2=0,n3=0;
	printf("Enter three numbers\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	getchar();
	if ((n1 > n2) && (n1 > n3))
		printf("%d is greater than %d and %d\n",n1,n2,n3);
	else if((n2 > n1) && (n2 > n3))
		printf("%d is greater than %d and %d\n",n2,n1,n3);
	else
		printf("%d is greater than %d and %d\n",n3,n1,n2);
}
