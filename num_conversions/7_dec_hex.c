#include <stdio.h>
void main()
{
	int num=0,hex[20],i=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	while(num>0)
	{
		hex[i++]=num%16;
		num=num/16;
	}
	while(--i>=0)
	{
		switch (hex[i])
		{
			case 10:
				printf("A");
				break;
			case 11:
				printf("B");
				break;
			case 12:
				printf("C");
				break;
			case 13:
				printf("D");
				break;
			case 14:
				printf("E");
				break;
			case 15:
				printf("F");
				break;
			default:
				printf("%d",hex[i]);
				break;
		}

        }
	printf("\n");
} 
