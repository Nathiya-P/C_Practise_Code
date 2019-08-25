/****************************************************************************
*
*  FILE NAME    : mywifi_main.c
*
*  DESCRIPTION  : Demonstrates WiFi functionalities
*
*****************************************************************************/

/*****************************************************************************
*                       Header Files
******************************************************************************/

#include "mywifi_header.h"

/******************************************************************************
*
*       Function Name   : main
*       Description     : Contains function calls to demonstrate WiFi
*			  functionalities
*       Returns         : Success or Failure
*
*******************************************************************************/

int main(int argc, char* argv[])
{
	int ret_status = 0;
        char interface[32]={0};
	
	ret_status = findWifiInt(interface);
	if ((ret_status == 1) && (strlen(interface) != 0))
	{
		if(argc == 2)
		{
			if(!(strcmp(argv[1],"scan")))
			{
				wifiScan(interface);
			}
			else if(!(strcmp(argv[1],"disconnect")))
			{
				wifiDisconnect(interface);
			}
			else if(!(strcmp(argv[1],"status")))
			{
				wifiStatus(interface);
			}
			else
			{
				printSyntax(argv[0]);
			}
		}
		else if((argc == 4) && (!strcmp(argv[1],"connect")))
		{
			wifiConnect(interface, argv[2], argv[3]);
		}
		else
		{
			printSyntax(argv[0]);
		}
	}
	return 0;
}
