#include <stdio.h>
void main()
{
	int year=0;
	printf("Enter an year\n");
	scanf("%d",&year);
	if (year%400 ==0)	
		printf("Leap year\n");
	else if(year%100==0)
		printf("Not a leap year\n");
	else if(year%4 ==0)
		printf("Leap year\n");
	else 
		printf("Not a leap year\n");
} 
