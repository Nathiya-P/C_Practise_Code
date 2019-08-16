#include <stdio.h>
int binadd(int,int);
void main()
{

	int n1=0,n2=0,mul=0,factor=1,temp=0;
	printf("Enter two binary numbers (0s and 1s)\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	getchar();
	while (n2>0)
	{
		temp=n2%10;
		if (temp == 1)
		{	
			n1 = n1 * factor;
			mul = binadd(n1,mul); 
		}
		else
			n1 = n1 * factor;
		n2=n2/10;
		factor=10;	
	}
	printf("\nResult of binary multiplication is %d\n",mul);
}

int binadd(int bin1, int bin2)
{
	int carry=0, sum[20], i=0, prod=0;
	while ((bin1>0) || (bin2>0))
	{
		sum[i++]= ((bin1%10)+(bin2%10)+carry)%2;
		carry=((bin1%10)+(bin2%10)+carry)/2; 
	        bin1 = bin1/10;
		bin2 = bin2/10;
	}
        if (carry == 1)	
		sum[i++]=carry;
	i--;

	while(i>=0)	
	prod = prod * 10 + sum[i--];
	
	return prod;	
} 
