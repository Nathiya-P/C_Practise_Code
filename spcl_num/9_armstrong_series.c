#include <stdio.h>
#include <math.h>
void main()
{
	int sum=0, d1=0, d2=0, d3=0;
	int num=0;
	printf("The Armstrong numbers are\n");
	while(num <= 999)
	{
		d1 = (num%10);
//		printf("d1:%d\n",d1);
		d2 = ((num%100)/10) - (d1/10);
//		printf("d2:%d\n",d2);
		d3 = ((num/100) - ((d2/10) - (d1/100)));
//		printf("d3:%d\n",d3);
		sum  = (pow(d1,3) + pow(d2,3) + pow(d3,3));
		if (sum == num)
			printf("%d\n",num);
		num++;
	}
} 
