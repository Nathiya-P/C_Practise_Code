#include <stdio.h>
void main()
{
//	int num[]={-1,5,7,-11,65,-8};
	int num[] = {10, -2, 15, 9, -8, 12, 20, -5};
	int arr_size = sizeof(num)/sizeof(int);
//	printf("No of elements:%d\n",arr_size);
	int begin=0,end=0,sum=0,i=0,large=0,j=0;
	for (i=0;i<arr_size;i++)
	{
		for(j=i;j<arr_size;j++)
		{	
			sum=sum+num[j];
			if(sum > large)
			{
				large=sum;
				begin=i;
				end=j;
			}	
		
		}
		sum=0;		
	}	
	printf("The largest sum in the array is %d\n",large);
	printf("Beginning:%d End:%d\n",begin,end);
} 
