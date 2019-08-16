#include <stdio.h>
void main()
{	
	int num =0;
	char val='n';
	while(1)
	{
	printf ("Enter a number\n");
	scanf("%d",&num);
	getchar();
	if (num >= 0)	
		printf ("%d is positive\n",num);
	else
		printf ("%d is negative\n",num);
	printf ("Enter n to exit\n");
	scanf ("%c",&val);
	if (val == 'n')
		break;
	}
}

