#include <stdio.h>
void main()
{
	int pin=0,choice=0, bal=1000, withdraw=0,end=0;	
	char transaction='n';
	printf("Welcome to ABC bank\n");
	do
	{
		printf("Enter your atm pin\n");
		scanf("%d",&pin);
		if (pin != 1111)
			printf("Invalid Pin\n");
	}while(pin != 1111);
	do
	{
	withdraw=0;	
	printf("Enter your choice\n");
	printf("1. Balance Enquiry\n2. Cash Withdrawal\n3. Cash Depositi\n4.Quit\n");
	scanf("%d",&choice);
	switch (choice)
	{	
		case 1:
			printf("Your account balance:%d\n",bal);
			break;
		case 2:
			printf("Enter amount to be withdrawn\n");
			scanf("%d",&withdraw);
			while(withdraw%100 != 0)
			{
				printf("Enter in the multiples of 100\n");
				scanf("%d",&withdraw);
			}
			if(bal - (withdraw + 500) < 0)
			{
				printf("Insufficient fund\n");
			}
			else
			{
				bal = bal - withdraw;
				printf("Amount withdrawn:%d\nCurrent balance:%d\n",withdraw,bal);
			}	
			break;
		case 3:
			printf("Enter the amount to be deposited\n");
			scanf("%d",&withdraw);
			bal = bal + withdraw;
			printf("Amount deposited:%d\nCurrent balance:%d\n",withdraw,bal);
			break;
		case 4:
			printf("Thank you for using ATM\n");
			break;
		default:
			printf("Invalid option\n");
	}
	printf("Would you like to make another transaction?(y/n)\n");
	scanf("%c",&transaction);
	if ((transaction == 'n')||(transaction == 'N'))
		end=1;
	}while(end != 1);
} 
