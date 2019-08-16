#include <stdio.h>
void main()
{
	int n1=0,n2=0,Asum[20],i=0,carry=0;	
	printf("Enter two numbers in bin form (0s and 1s)\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
        while ((n1>0)||(n2>0))
	{
		Asum[i++]= ((n1%10)+(n2%10)+carry)%2;
		carry= ((n1%10)+(n2%10)+carry)/2;
		n1 = n1 / 10;
		n2 = n2 / 10;
	}
	if (carry > 0)
		Asum[i++]=carry;
	i--;
	printf("The sum of two binary numbers is:");
	while(i>=0)
		printf("%d",Asum[i--]);
	printf("\n");
} 
