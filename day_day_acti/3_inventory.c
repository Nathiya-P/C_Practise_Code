#include <stdio.h>
typedef struct Date
{
	int day;
	int month;
	int year;
}date;

typedef struct inventory
{
	char name[20];
	int code;
	int price;
	int num_item;
	date mfg;
}items;
void main()
{
	items item[10];
	int num=0,i=0;
	printf("Enter the number of items\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter the item name\n");
		scanf("%s",item[i].name);
		printf("Enter the item code\n");
		scanf("%d",&item[i].code);
		printf("Enter the item price\n");
		scanf("%d",&item[i].price);
		printf("Enter the availabe no of items \n");
		scanf("%d",&item[i].num_item);
		printf("Enter the item's manufacturing date(dd-mm-yyyy)\n");
		scanf("%d-%d-%d",&item[i].mfg.day,&item[i].mfg.month,&item[i].mfg.year);
	}
	printf("The available items are\n");
	printf("------------------------------------------------------------------------------------------------\n");
	printf("S.N|    NAME    |  CODE  | PRICE | QUANTITY | MFG DATE\n");
	printf("------------------------------------------------------------------------------------------------\n");
	for (i=0;i<num;i++)
	{
		printf("%d   %s 	    %d    %d    %d     %d/%d/%d\n",(i+1),item[i].name,item[i].code,item[i].price, item[i].num_item,item[i].mfg.day,item[i].mfg.month, item[i].mfg.year);
	}
} 
