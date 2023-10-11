#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,a,b,count;
	printf("enter the range\n");
	scanf("%d%d" , &a,&b);
	for(i=a;i<=b;i++)
	{
	//	count=0;
		for(j=1;j<=i;j++)
		{count=0;
			if(i%j==0)
			{
				count++;
			}
		}
			if(count==2)
				{
					printf("%d\t" , i);
				}
	}
	return 0;
}
