#include <stdio.h>
void main()
{
	int n1=0,n2=0;
	char val='n';
	while(1)
	{
		printf("Enter two number to check whether they are equal\n");
		scanf("%d",&n1);
		scanf("%d",&n2);
		getchar();
		if (n1 == n2)
			printf("%d and %d are equal\n", n1, n2);
		else
			printf("%d and %d are not equal\n", n1, n2);
		printf("Enter n to exit:");	
		scanf("%c",&val);
		if (val == 'n')
			break;
	}
}

