
/****************************************************************************
*
*  FILE NAME    : recursion_functions.c
*
*  DESCRIPTION  : Contains functions to perform and display recursion 
*		  functionalities
*
*****************************************************************************/

/*****************************************************************************
*                       Header Files
******************************************************************************/

#include "recursion_header.h"

/******************************************************************************
*
*       Function Name   : sum_dig
*       Description     : Adds the digits of the number recursively
*       Returns         : return the sum
*
*******************************************************************************/
int sum_dig(int n)
{	
	if (n==0)
		return 0;
	else
		return ((n%10) + sum_dig(n/10)); 
}

/******************************************************************************
*
*       Function Name   : rev
*       Description     : reversing the digits of the number recursively
*       Returns         : return the reversed number
*
*******************************************************************************/

int rev(int n, int len)
{
        if(len == 1)
                return n;
        else
                return (((n%10)* pow(10,len-1)) + rev(n/10,--len));
}

/******************************************************************************
*
*       Function Name   : sum 
*       Description     : Adding the numbers recursively
*       Returns         : return the sum
*
*******************************************************************************/

int sum (int n)
{
        if (n==0)
                return 0;
        else
                return (n+sum(n-1));
}

/******************************************************************************
*
*       Function Name   : prime 
*       Description     : check whether its a prime
*       Returns         : return whether its prime
*
*******************************************************************************/

int prime(int num, int check)
{
        if (check == 1)
                return 1;
        else
        {
                if ((num % check) == 0)
                        return 0;
                else
                        return prime (num,--check);
        }
}

/******************************************************************************
*
*       Function Name   : bin 
*       Description     : finding the binary equivalent recursively
*       Returns         : return binary equivalent
*
*******************************************************************************/

int bin(int n)
{
        if(n==1)
                return 1;
        else
                return ((n%2)+10*bin(n/2));
}

/******************************************************************************
*
*       Function Name   : prod 
*       Description     : finding the product of numbers using recursion
*       Returns         : return the product
*
*******************************************************************************/

int prod (int m, int n)
{
        if ((m==0)||(n==0))
                return 0;
        else if (n == 1)
                return m;
        else
                return (m + prod(m,--n));
}

