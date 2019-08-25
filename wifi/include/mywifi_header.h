/*******************************************************************************
*
*  FILE NAME    : mywifi_header.h
*
*  DESCRIPTION  : Contains macros and function definitions for mywifi program
*
*******************************************************************************/

/*******************************************************************************
*                       HEADER FILES
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*******************************************************************************
*                       MACROS
*******************************************************************************/

#define IN
#define OUT
#define MODI

/*******************************************************************************
*                       FUNCTION PROTOTYPES
*******************************************************************************/
void printSyntax(char*);
int findWifiInt(char*);
void wifiScan(char*);
void wifiConnect(char*, char*, char*);
void wifiDisconnect(char*);
void wifiStatus(char*);
