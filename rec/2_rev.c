#include <stdio.h>
#include <math.h>
int rev(int,int);
void main()
{
	int num=0,len=0,buf=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	buf=num;
	while(buf!=0)
	{	
		len++;
		buf=buf/10;
	}
	printf("Length:%d\n",len);
	num=rev(num,len);
	printf("Reverse: %d \n",num);
}
int rev(int n, int len)
{
	if(len == 1)
		return n;
	else
		return (((n%10)* pow(10,len-1)) + rev(n/10,--len));
} 
