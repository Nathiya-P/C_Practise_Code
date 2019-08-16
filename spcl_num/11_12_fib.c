#include <stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[])
{
	int a=0,b=0,c=0;
	if (argc != 2)
	{	
		printf("Enter the arguments as follows, ./11_12_fib no\n");
		exit;
	}
	else
	{
		int i = atoi(argv[1]);
		int count =0;
		while(count < i)
		{
			c=a+b;
			printf("%d\n",c);
			if((count == 0) ||(count == 1))
				b=1;
			else
			{
				a=b;b=c;
			}
			count++;
		}	
	}

} 
