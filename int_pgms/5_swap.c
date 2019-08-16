#include <stdio.h>
void main()
{	
	int n1=0,n2=0;
	char val='n';
	while(1)
	{
		printf("Enter two numbers to swap\n");
		scanf("%d",&n1);
		scanf("%d",&n2);
		getchar();
		n1=n1+n2;
		n2=n1-n2;
		n1=n1-n2;
		printf("The numbers after swapping are %d and %d\n",n1,n2);
		printf("Enter n to exit:");
		scanf("%c",&val);
		if (val == 'n')
		break;
	}
}
