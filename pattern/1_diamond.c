#include <stdio.h>
void main()
{
	int n=0,count=0,i=0,j=0,k=0;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	count=n-1;	
	printf("\n");
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=count;i++)
			printf(" ");
		count--;
		for(j=1;j<=(2*k-1);j++)
			printf("*");
		printf("\n");
	}
	count=1;
	for(k=1;k<=(n-1);k++)
	{
		for(i=1;i<=count;i++)
			printf(" ");
		count++;
		for(j=1;j<=(2*(n-k)-1);j++)
			printf("*");
		printf("\n");
	}

} 
