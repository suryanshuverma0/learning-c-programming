#include<stdio.h>
#include<conio.h>

void main()
{
	int i , j , n;
	printf("Enter n\n");
	scanf("%d" , &n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf(" %d" , j);
		}
		printf("\n");
	}
}
