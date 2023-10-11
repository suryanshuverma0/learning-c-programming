#include<stdio.h>

int main()
{
	int* x,*y,*z,a,b,c ;
	{
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		x=&a;
		y=&b;
		z=&c;
		if((*x>*y) && (*x>*z))
		{
			printf("%d is greatest",*x);
		}
		else if((*y>*x)&& (*y>*z))
		{
			printf("%d is greatest",*y);
		}
		else
		{
			printf("%d is greatest",*z);
		};

return 0;
}
}
