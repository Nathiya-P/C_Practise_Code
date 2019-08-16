#include <stdio.h>
int sum(int*);
void main()
{
	int num[5]={1,2,3,4,5};
	printf("Sum:%d\n",sum(num));
}
int sum(int *ptr)
{
	int i=0,sum=0;
	for(i=0;i<5;i++)
		sum=sum+*(ptr+i);
	return sum;

}
