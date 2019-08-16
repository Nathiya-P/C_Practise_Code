#include<stdio.h>
void main()
{
	int num=0, year=0, week=0, day=0, rem=0;
	printf("Enter the number of days\n");
	scanf("%d",&num);
	year = num/365;
	rem = num%365;
	week = rem/7;
	day = rem%7;
	printf("\n No of year(s):%d \n No of week(s):%d\n No of day(s):%d\n",year,week,day);
}
