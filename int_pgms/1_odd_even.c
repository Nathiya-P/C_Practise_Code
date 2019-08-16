#include <stdio.h>
void main()
{
	int num=0;
	char val='n';
	while (1)
	{
	printf ("Enter a number \n");
	scanf ("%d", &num);
	getchar();
	if ((num%2)==0)
		printf("%d is even\n",num);
	else
		printf("%d is odd\n",num);
	printf ("Enter y to continue or n to exit: ");	
	scanf("%c", &val);
	if (val == 'n')
		break;
	}
}
