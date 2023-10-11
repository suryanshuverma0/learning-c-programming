#include<stdio.h>
#include<conio.h>
int pa(int n);
void main()
{
	int a , b , i , j;
	printf("entr a and b\n");
	scanf("%d%d" , &a , &b);
	for(i=a+1;i<b;i++)
	{
		j=pa(i);
		if(i==j)printf("\n%d" , i);
	}
}

int pa(int n)
{
	int r , s=0;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
}
