#include <stdio.h>
union number 
{
	int n1;
	char n2;
};
void main()
{
	union number num;
	printf("The size is %ld\n",sizeof(num));
} 
