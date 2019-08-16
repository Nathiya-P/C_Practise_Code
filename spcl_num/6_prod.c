#include <stdio.h>
void main()
{
	int n1=0,n2=0,res=0;
	printf("Enter two numbers\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	getchar();
	for(int i =1; i<=n2;i++)
	{
		res += n1;
	}
	printf("The result of the multiplication : %d\n",res);
} 
