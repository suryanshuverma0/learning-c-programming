#include<stdio.h>
#include<conio.h>
void triangular(int n , int i);

void main()
{
	void triangular(n , i); 
}

void triangular(int n , int i) 
{
	int sum=0;
	printf("Enter n");
	scanf("%d" , &n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		if(sum=n)
		{
			printf("triangular");
		}
	}
	if(n=i)
	{
		printf('Not triangular');
	}
}
