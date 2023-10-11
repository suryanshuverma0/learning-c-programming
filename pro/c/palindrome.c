#include<stdio.h>
#include<conio.h>

int main()
{
	int a ,b ,n , i , r , rev;
	printf("Enter a and b\n");
	scanf("%d%d" , &a , &b);
	for(i=a; i<=b; i++)
	{
		n=i;
		rev=0;
	while(n!=0)
		{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
		}	
	}
	if(i==rev)
	printf("%d" , i);
	return 0;
}
