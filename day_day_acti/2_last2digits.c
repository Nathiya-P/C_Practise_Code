#include <stdio.h>
void main()
{
	int year=0;
	printf("Enter a year\n");
	scanf("%d",&year);
	printf("The year is %02d\n",(year%100));
} 
