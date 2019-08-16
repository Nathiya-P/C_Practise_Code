#include <stdio.h>
void main ()
{	
	int num1=0, num2=0, count=0,sum=0;
	printf("Enter two numbers, n1 and n2 with n1 < n2\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	getchar();
	if(num1 >= num2)
	{
		printf("Enter n1 less than n2\n");
		scanf("%d", &num1);
		scanf("%d", &num2);
		getchar();
	}
	for(int i=num1; i <= num2; i++)
	{
		if ((i%5)== 0)
		{	
			printf("%d is divisible by 5\n",i);
			count++;
			sum += i;
		}
	}
	printf("Total numbers divisible by 5 in the range from %d to %d is %d\n",num1,num2,count);
	printf("sum of numbers divisible by 5 in the range from %d to %d is %d\n",num1,num2,sum);
}
