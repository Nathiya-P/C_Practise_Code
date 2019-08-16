#include <stdio.h>
void main()
{
	float height=0.0;
	printf("Enter the height in centimetres\n");
	scanf("%f",&height);
	if((height > 170)&&(height < 190))
		printf("Taller\n");
	else if((height > 150)&&(height <= 170))
		printf("Average height\n");
	else if(height <= 150)
		printf("Dwarf\n");
	else
		printf("Abnormal height\n");
} 
