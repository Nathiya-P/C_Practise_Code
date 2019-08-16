#include <stdio.h>
#define decode(s,b,c,d,e,f,g,h) g##s##c##h
#define begin decode (a,b,i,j,k,l,m,n)
void begin()
{
	printf("hello world\n");
} 
