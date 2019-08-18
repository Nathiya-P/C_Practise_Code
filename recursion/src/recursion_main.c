
/****************************************************************************
*
*  FILE NAME    : recursion_main.c
*
*  DESCRIPTION  : Demonstrates recursion functionalities
*
*****************************************************************************/

/*****************************************************************************
*                       Header Files
******************************************************************************/

#include "recursion_header.h"

/******************************************************************************
*
*       Function Name   : main
*       Description     : Contains function calls to demonstrate recursion
*			  functionalities
*       Returns         : Success or Failure
*
*******************************************************************************/

int main(int argc, char* argv[])
{
	int choice=0;
	int num=0,num1=0;
	int len=0,buf=0;
	do
	{
		choice=0,num=0,len=0,buf=0,num1=0;
		printf("Below operations are done using recursion,\n");
		printf("1. Sum of digits\n");
		printf("2. Reversing the digits\n");
		printf("3. Sum of numbers\n");
		printf("4. Check the number is prime\n");
		printf("5. Binary equivalent\n");
		printf("6. Product of numbers\n\n");
		printf("Enter your option\n");

		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter a number\n");
				scanf("%d",&num);
				num=sum_dig(num);
				printf("Sum of its digits: %d \n",num);
				break;
			case 2:
				printf("Enter a number\n");
				scanf("%d",&num);
				buf=num;
				while(buf!=0)
				{
					len++;
					buf=buf/10;
				}
				printf("Length:%d\n",len);
				num=rev(num,len);
				printf("Reverse: %d \n",num);
				break;
			case 3:	
				printf("Enter a number\n");
				scanf("%d",&num);
				num=sum(num);
				printf("Sum : %d \n",num);
				break;
			case 4:
				printf("Enter a number\n");
				scanf("%d",&num);
				num=prime(num,num/2);
				if (num == 1)
					printf("Prime number\n");
				else
					printf("Not a prime number\n");
				break;
			case 5:
				printf("Enter a number\n");
				scanf("%d",&num);
				num=bin(num);
				printf("Binary equivalent: %d \n",num);
				break;
			case 6:
				printf("Enter two numbers\n");
				scanf("%d",&num);
				scanf("%d",&num1);
				num=prod(num,num1);
				printf("Multiplied value: %d \n",num);
				break;
			default:
				printf("Enter correct option\n");

		}

		printf("\n\nPress 0 to exit, Any number to continue\n");
		scanf("%d",&choice);
	}while(choice != 0);

	printf("\n Have a great time, Bye bye!\n\n");
	return 0;
}
