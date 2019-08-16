#include <stdio.h>
void main()
{
	int a[]={1,13,-15,-65,100,8,98};
	int size=sizeof(a)/sizeof(int),large=0,second=0,small=0,last_small=0,i=0;
	small = a[0];
	for(i=0;i<size;i++)
	{
		if(large < a[i])
		{
			second = large;
			large=a[i];
		}else if(second < a[i])
		{
			second = a[i];
		}
		if (small > a[i])
		{
			last_small = small;
			small = a[i];
		}else if(last_small > a[i])
		{
			last_small = a[i];
		}
	}
	printf("Second largest:%d\nSecond smallest:%d\n",second,last_small);
} 
