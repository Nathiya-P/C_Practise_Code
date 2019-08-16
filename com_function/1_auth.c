#include <stdio.h>
#include <string.h>
void main()
{
	char user[20],pwd[8];
	char c;
	printf("Enter the username\n");
	scanf("%s",user);
	printf("Enter the password\n");
	getchar();
	for (int i=0;i<8;i++)
	{
		c=getchar();
		pwd[i]=c;
		c='*';	
		printf("%c",c);
	}
	printf("\nThe password for %s is %s",user,pwd);

} 
