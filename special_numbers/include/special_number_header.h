/*******************************************************************************
*
*  FILE NAME    : special_number_header.h
*
*  DESCRIPTION  : Contains macros and function definitions for special_number program
*
*******************************************************************************/

/*******************************************************************************
*                       HEADER FILES
*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*******************************************************************************
*                       MACROS
*******************************************************************************/

#define INvo
#define OUT
#define MODI

/*******************************************************************************
*                       STRUCTURES
*******************************************************************************/

struct com_no
{
        int real;
        int imaginery;
};

typedef struct com_no cn;

/*******************************************************************************
*                       FUNCTION PROTOTYPES
*******************************************************************************/
void enter(int *num);
void greater();
int reverse(int);
void palindrome();
void bin_sum();
void bin_mul();
int binadd(int,int);
void prod();
int num_digit(int);
void armstrong_no();
void perfect_no();
void armstrong_no_series();
void sum_imaginary_no();
void fibinocci_series();
void sum_natural_nos();
void swap_nos();
