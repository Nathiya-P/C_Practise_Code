
/****************************************************************************
*
*  FILE NAME    : special_number_main.c
*
*  DESCRIPTION  : Demonstrates special_number functionalities
*
*****************************************************************************/

/*****************************************************************************
*                       Header Files
******************************************************************************/

#include "special_number_header.h"

/******************************************************************************
*
*       Function Name   : main
*       Description     : Contains function calls to demonstrate special_number
*			  functionalities
*       Returns         : Success or Failure
*
*******************************************************************************/

int main(int argc, char* argv[])
{
	int choice=0;
	int n1=0;
	do
	{
		choice=0,n1=0;
		printf("Please find the options below,\n");
		printf("1. Greatest of 3 numbers\n");
		printf("2. Reversing a number\n");
		printf("3. To check a palindrome \n");
		printf("4. Sum of 2 binary numbers\n");
		printf("5. Binary multiplication\n");
		printf("6. Product of numbers\n");
		printf("7. To check an armstrong number \n");
		printf("8. To check a perfect number \n");
		printf("9. Display armstrong number series \n");
		printf("10. Sum of complex numbers \n");
		printf("11. Fibinocci series \n");
		printf("12. Sum of 50 Natural numbers \n");
		printf("13. Swapping numbers \n");

		printf("Enter your option\n");

		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				greater();
				break;
			case 2:
				enter(&n1);
				n1=reverse(n1);
				printf("Reversed no:%d\n",n1);
				break;
			case 3:	
				palindrome();
				break;
			case 4:
				bin_sum();
				break;
			case 5:
				bin_mul();
				break;
			case 6:
				prod();
				break;
			case 7:
				armstrong_no();
				break;
			case 8:
				perfect_no();	
				break;
			case 9:
				armstrong_no_series();
				break;
			case 10:
				sum_imaginary_no();
				break;
			case 11:
				fibinocci_series();
				break;
			case 12:
				sum_natural_nos();
				break;
			case 13:
				swap_nos();
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
