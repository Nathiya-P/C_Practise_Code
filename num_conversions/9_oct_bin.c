#include <stdio.h>
#include <string.h>
void main()
{
	char num[20];
	int i=0;
	printf("Enter an octal number\n");
	scanf("%s",num);
	printf("Binary equivalent:");
	while(num[i])
	{
		switch (num[i++])
		{
			case '0':
				printf("000");break;
			case '1':
				printf("001");break;
			case '2':
				printf("010");break;
			case '3':
				printf("011");break;
			case '4':
				printf("100");break;
			case '5':
				printf("101");break;
			case '6':
				printf("110");break;
			case '7':
				printf("111");break;
			default:
				printf("Invalid octal digit\n");return;
		}
	}
	printf("\n");
} 
