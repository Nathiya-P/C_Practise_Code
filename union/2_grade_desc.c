#include <stdio.h>
void main()
{
	char grade='Z';
	printf("Enter your grade\n");
	scanf("%c",&grade);
	grade=toupper(grade);
	switch (grade)
	{
		case 'A':
			printf("Excellent\n");break;
		case 'B':
			printf("Good\n");break;
		case 'C':
			printf("Not bad\n");break;
		case 'D':
			printf("Needs improvement\n");break;
		default:
			printf("Invalid grade\n");
	}
} 
