#include<stdio.h>
#include<conio.h>

void main()
{
	int i , j;
	for(i=1; i<=6; i++)
	{
		printf("\n");
	}
	for(j=1; j<=6-i; j++)
	printf(" ");
	for(j=1; j<=i; j++)
	printf("* ");
}
