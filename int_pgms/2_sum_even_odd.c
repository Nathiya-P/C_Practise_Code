#include <stdio.h>
void main()
{
	int num=0, temp=0, even=0, odd=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("Enter %d numbers\n",num);
	for (int i=0; i < num;i++)
	{
		scanf("%d",&temp);
		getchar();
		if((temp%2) == 0)
			even += temp;
		else	
			odd += temp;

	}
	printf("sum of even numbers:%d\n",even);
	printf("sum of odd numbers:%d\n",odd);
}
