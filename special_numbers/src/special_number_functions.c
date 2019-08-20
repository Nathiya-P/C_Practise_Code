
/****************************************************************************
*
*  FILE NAME    : special_number_functions.c
*
*  DESCRIPTION  : Contains functions to perform and display special_number 
*		  functionalities
*
*****************************************************************************/

/*****************************************************************************
*                       Header Files
******************************************************************************/

#include "special_number_header.h"

/******************************************************************************
*
*       Function Name   : enter
*       Description     : To get input from the user
*       Returns         : Nothing
*
*******************************************************************************/
void enter(int *num)
{
	printf("Enter a number\n");
	scanf("%d",num);	
}

/******************************************************************************
*
*       Function Name   : greater
*       Description     : To find the greatest of numbers
*       Returns         : Nothing
*
*******************************************************************************/
void greater()
{
	int n1=0,n2=0,n3=0;
	enter(&n1);
	enter(&n2);
	enter(&n3);

        if ((n1 > n2) && (n1 > n3))
                printf("\n\n%d is greater than %d and %d\n",n1,n2,n3);
        else if((n2 > n1) && (n2 > n3))
                printf("\n\n%d is greater than %d and %d\n",n2,n1,n3);
        else
                printf("\n\n%d is greater than %d and %d\n",n3,n1,n2);

}

/******************************************************************************
*
*       Function Name   : reverse
*       Description     : To reverse a number
*       Returns         : Nothing
*
*******************************************************************************/
int reverse(int num)
{
	int rem=0,rev=0;

        while (num > 0)
        {
                rem = num % 10;
                num = num / 10;
                rev = rev * 10 + rem;
        }
	return rev;
}

/******************************************************************************
*
*       Function Name   : palindrome
*       Description     : To check a number is palindrome
*       Returns         : Nothing
*
*******************************************************************************/
void palindrome()
{
	int num=0,temp=0;
	enter(&num);
	temp=num;
	num=reverse(num);
        printf("\n\nReversed no:%d\n",num);
        if (temp==num)
                printf("\n%d is a palindrome\n",temp);
        else
                printf("\n%d is not a palindrome\n",temp);
	
}

/******************************************************************************
*
*       Function Name   : bin_sum
*       Description     : To add two binary numbers
*       Returns         : Nothing
*
*******************************************************************************/
void bin_sum()
{
	int n1=0,n2=0,carry=0,Asum[20],i=0;
	printf("\n\nEnter two binary numbers\n");
	enter(&n1);
	enter(&n2);

        while ((n1>0)||(n2>0))
        {
                Asum[i++]= ((n1%10)+(n2%10)+carry)%2;
                carry= ((n1%10)+(n2%10)+carry)/2;
                n1 = n1 / 10;
                n2 = n2 / 10;
        }
        if (carry > 0)
                Asum[i++]=carry;
        i--;
        printf("\nThe sum of two binary numbers is:");
        while(i>=0)
                printf("%d",Asum[i--]);
        printf("\n");	
}

/******************************************************************************
*
*       Function Name   : bin_mul
*       Description     : To multiply two binary numbers
*       Returns         : Nothing
*
*******************************************************************************/
void bin_mul()
{
	int n1=0,n2=0,mul=0,factor=1,temp=0;
	printf("\n\nEnter two binary numbers\n");
	enter(&n1);
	enter(&n2);

        while (n2>0)
        {
                temp=n2%10;
                if (temp == 1)
                {
                        n1 = n1 * factor;
                        mul = binadd(n1,mul);
                }
                else
                        n1 = n1 * factor;
                n2=n2/10;
                factor=10;
        }
        printf("\n\nResult of binary multiplication is %d\n",mul);

}

/******************************************************************************
*
*       Function Name   : binadd
*       Description     : To add binary numbers
*       Returns         : Nothing
*
*******************************************************************************/
int binadd(int bin1, int bin2)
{
        int carry=0, sum[20], i=0, prod=0;
        while ((bin1>0) || (bin2>0))
        {
                sum[i++]= ((bin1%10)+(bin2%10)+carry)%2;
                carry=((bin1%10)+(bin2%10)+carry)/2;
                bin1 = bin1/10;
                bin2 = bin2/10;
        }
        if (carry == 1)
                sum[i++]=carry;
        i--;

        while(i>=0)
        prod = prod * 10 + sum[i--];

        return prod;
}

/******************************************************************************
*
*       Function Name   : prod
*       Description     : To find product of two numbers
*       Returns         : Nothing
*
*******************************************************************************/

void prod()
{
        int n1=0,n2=0,res=0,i=0;
	enter(&n1);
	enter(&n2);
        for(i =1; i<=n2;i++)
        {
                res += n1;
        }
        printf("\n\nThe result of the multiplication : %d\n",res);

}

/******************************************************************************
*
*       Function Name   : num_digit
*       Description     : To find the number of digits
*       Returns         : number of digits
*
*******************************************************************************/

int num_digit(int num)
{
        int digit=0;
        while(num>0)
        {
                num=num/10;
                digit++;
        }
        return digit;
}

/******************************************************************************
*
*       Function Name   : armstrong_no
*       Description     : To find whether a number is an armstrong number
*       Returns         : nothing
*
*******************************************************************************/
void armstrong_no()
{
        int num=0,ndigit=0,rem=0,sum=0,temp=0;
	enter(&num);
        temp=num;
        ndigit=num_digit(num);
        while (num>0)
        {
                rem=num%10;
                sum += pow(rem,ndigit);
                num=num/10;
        }
        if(sum==temp)
                printf("\n\n%d is Armstrong number\n",temp);
        else
                printf("\n\n%d is not Armstrong number\n",temp);	
}

/******************************************************************************
*
*       Function Name   : perfect_no
*       Description     : To find whether a number is a perfect number
*       Returns         : nothing
*
*******************************************************************************/
void perfect_no()
{
        int num=0,sum=0,i=0;
	enter(&num);
        for(i=1; i<num; i++)
        {
                if (0 == (num%i))
                        sum+=i;
        }
        if (sum==num)
                printf("\n\n%d is a perfect number\n",num);
        else
                printf("\n\n%d is not a perfect number\n",num);
	
}

/******************************************************************************
*
*       Function Name   : armstrong_no_series
*       Description     : To find armstrong numbers less than 1000
*       Returns         : nothing
*
*******************************************************************************/
void armstrong_no_series()
{
        int sum=0, d1=0, d2=0, d3=0;
        int num=0;
        printf("\n\nThe Armstrong numbers are\n");
        while(num <= 999)
        {
                d1 = (num%10);
                d2 = ((num%100)/10) - (d1/10);
                d3 = ((num/100) - ((d2/10) - (d1/100)));
                sum  = (pow(d1,3) + pow(d2,3) + pow(d3,3));
                if (sum == num)
                        printf("%d\n",num);
                num++;
        }

}

/******************************************************************************
*
*       Function Name   : sum_imaginary_no
*       Description     : sum of two imaginary nos
*       Returns         : nothing
*
*******************************************************************************/

void sum_imaginary_no()
{
        cn a,b,c;
        printf("Enter real and imaginary part for complex number1\n");
        scanf("%d",&a.real);
        scanf("%d",&a.imaginery);
        printf("Enter real and imaginary part for complex number2\n");
        scanf("%d",&b.real);
        scanf("%d",&b.imaginery);
        c.real = a.real + b.real;
        c.imaginery = a.imaginery + b.imaginery;
        printf("\n\nThe result is %d+%di\n",c.real,c.imaginery);

}

/******************************************************************************
*
*       Function Name   : fibinocci_series
*       Description     : Generate fibinocci series
*       Returns         : nothing
*
*******************************************************************************/
void fibinocci_series()
{
	int i=0,count=0,a=0,b=0,c=0;
	enter(&i);
        printf("\n\nThe fibinocci series:\n");
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

/******************************************************************************
*
*       Function Name   : sum_natural_nos
*       Description     : Display sum of 50 natural numbers
*       Returns         : nothing
*
*******************************************************************************/
void sum_natural_nos()
{
        int sum=0, i=0;
        for (i=1;i<=50;i++)
                sum += i;
        printf("\nSum of 50 natural number:%d\n",sum);
}

/******************************************************************************
*
*       Function Name   : swap_no
*       Description     : swapping two numbers
*       Returns         : nothing
*
*******************************************************************************/

void swap_nos()
{
        int n1=0,n2=0;
	enter(&n1);
	enter(&n2);
        printf("\nBefore swapping n1:%d, n2:%d\n",n1,n2);
        n1=n1^n2;
        n2=n1^n2;
        n1=n1^n2;
        printf("\nAfter swapping n1:%d, n2:%d\n",n1,n2);
}


