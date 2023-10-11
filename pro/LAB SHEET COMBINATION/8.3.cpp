#include<stdio.h>


int main()
{
	int *p,*q,*r,x,y,z;
	scanf("%d%d%d" , &x,&y,&z);
	p=&x;
	q=&y;
	r=&z;
	if(*p>*q && *p>*r)
	{
		printf("p is greatest");
	}
	else if(*q>*p && *q>*r)
	{
		printf("q is greatest");
	}
	else 
	printf("r is greatest");
}
