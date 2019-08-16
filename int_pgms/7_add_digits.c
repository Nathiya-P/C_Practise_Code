#include<stdio.h>
void main()
{
	int n1=0,temp=0,dig_count=0,sum=0;
	printf("Enter a number\n");
	scanf("%d",&n1);
	getchar();	
	while(n1>0)
	{	
		temp=n1%10;
		dig_count++;
		sum += temp;
		n1=n1/10;
	}
	printf("\nsum of digits:%d",sum);
	printf("\nNum of digits:%d\n",dig_count);
}
