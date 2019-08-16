#include <stdio.h>
#include <string.h>
int dig_con(char c)
{
	int value=0;
	switch (c)
	{
		case 'M':
			value=1000;break;
		case 'D':
			value=500;break;
		case 'C':
			value=100;break;
		case 'L':
			value=50;break;
		case 'X':
			value=10;break;
		case 'V':
			value=5;break;
		case 'I':
			value=1;break;
		default:
			value=-1;break;
	}
	return value;
}
void main()
{
	char roman[20];
	int len=0,num=0,i=0;
	printf("Enter the roman number as I,V,X,L,C,D,M\n");
	scanf("%s",roman);
	len=strlen(roman);
	while(roman[i])	
	{
		if(dig_con(roman[i]) < 0)
		{
			printf("Invalid Number\n");
			return;
		}
		
		if((len-i)>2)
		{
			if(dig_con(roman[i]) < dig_con(roman[i+2]))
			{
				printf("Invalid Number\n");
				return;
			}
		}
		
		if(dig_con(roman[i]) >= dig_con(roman[i+1]))
		{
			num += dig_con(roman[i]);	
		}	
		else
		{
			num += (dig_con(roman[i+1]) - dig_con(roman[i]));
			i++;
		}	
		i++;	
	}
	printf("Decimal equivalent : %d\n", num);
	
} 
