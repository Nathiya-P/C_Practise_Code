/****************************************************************************
*
*  FILE NAME    : mywifi_functions.c
*
*  DESCRIPTION  : Contains functions to perform and display wifi 
*		  functionalities
*
*****************************************************************************/

/*****************************************************************************
*                       Header Files
******************************************************************************/

#include "mywifi_header.h"

/******************************************************************************
*
*       Function Name   : printSyntax
*       Description     : Prints the command line syntax on the screen
*       Returns         : Nothing
*
*******************************************************************************/

void printSyntax(char* myexe)
{
        printf("\nInvalid arguments! Please check the syntax below\n\n");
        printf("Scanning: %s scan\n",myexe);
        printf("Connecting: %s connect <SSID> <PASSWORD>\n",myexe);
        printf("Disconnecting: %s disconnect\n",myexe);
        printf("Checking Status: %s status\n\n",myexe);
}

/******************************************************************************
*
*       Function Name   : findWifiInt
*       Description     : Finds the wifi interface available in the device
*       Returns         : Status
*
*******************************************************************************/

int findWifiInt(char* interface)
{
        FILE* fp;
        const char* int_cmd ="iw dev | awk '$1==\"Interface\"{print $2}'";

        fp = popen(int_cmd,"r");
        if(fp == NULL)
        {
                printf("Unable to find wireless interface\n");
                return 0;
        }

        /* Assuming only one wifi interface exists*/
        if(fscanf(fp,"%s",interface) == EOF)
        {
                printf("Wireless Interface does not exist!");
                return 0;
        }
        pclose(fp);
        return 1;
}


/******************************************************************************
*
*       Function Name   : wifiScan
*       Description     : Scans and displays the available WiFi networks
*       Returns         : Nothing
*
*******************************************************************************/

void wifiScan(char* interface)
{
        char scan_cmd[100];
        printf("\nScanning available WiFi networks...\n\n");
        printf("\n\nAvailable WiFi Networks:\n\n");
        snprintf(scan_cmd,100,"sudo iwlist %s scan | grep -E \"ESSID|Address|Quality|WEP|WPA\"", interface);
        system(scan_cmd);
}

/******************************************************************************
*
*       Function Name   : wifiConnect
*       Description     : Connects to the mentioned WiFi network
*       Returns         : Nothing
*
*******************************************************************************/

void wifiConnect(char* interface, char* ssid, char* pwd)
{
	char connect_cmd[100];
        printf("\nConnecting to WiFi network %s...\n\n", ssid);
	snprintf(connect_cmd,100,"sudo ifconfig %s up;sudo iw dev %s connect -w %s;sudo dhclient;iwconfig;",interface,interface,ssid);
	system(connect_cmd);
	
}

/******************************************************************************
*
*       Function Name   : wifiDisconnect
*       Description     : Disconnects from the connected WiFi network
*       Returns         : Nothing
*
*******************************************************************************/

void wifiDisconnect(char* interface)
{
	char disconnect_cmd[50];
        printf("\nDisconnecting from the WiFi network...\n\n");
	snprintf(disconnect_cmd,50,"sudo iw dev %s disconnect",interface);
	system(disconnect_cmd);
}

/******************************************************************************
*
*       Function Name   : wifiStatus
*       Description     : Checks the status of the current WiFi session
*       Returns         : Nothing
*
*******************************************************************************/

void wifiStatus(char* interface)
{
	char status_cmd[50];
        printf("\nChecking the status of the WiFi session...\n\n");
	snprintf(status_cmd,50,"sudo iw dev %s link",interface);
	system(status_cmd);
}

