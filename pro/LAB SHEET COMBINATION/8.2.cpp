#include<stdio.h>

int main()
{
	int i,j,c;
	int a[100];
	for(i=0;i<5;i++)
	{
		scanf("%d" , (a+i));
	}
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-1;j++)
		{
			if(*(a+j)>*(a+j+1))
			{
			c=*(a+j);
			*(a+j)=*(a+j+1);
			*(a+j+1)=c;	
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n" , *(a+i));
	}
}
