#include <stdio.h>
void main()
{
	int a[]={17,4,-4,-7,9,15};
	int size=sizeof(a)/sizeof(int),i=0,large=a[0];,second=0;
	for(i=0;i<size;i++)
	{
		if (large < a[i])
		{
			second = large;
			large=a[i];
		}
		else if(second < a[i])
		{	
			second = a[i];
		}
	}
	printf("Largest:%d\nSecond Largest:%d\n",large,second);
} 
