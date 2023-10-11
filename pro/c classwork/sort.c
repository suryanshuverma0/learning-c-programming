#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5];
	readarr(a);
	sortsarr(a);
	displayarr(a);
	return 0;
}
int readarr(int *a)
{
	int i;
	printf("ENTER NUM\N");
	for(i=0;i<5;i++)
	{
		scan("%d" , a+i);
		return 0;
	}
}
int sortsarr(int *a)
{
	int i , j ,c;
	for(i=0;i<5;i++)
	{
		for(j=i;i<5;j++)
		{
			if(*(a+i)>*(a+j)){
				c=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=c;
			}
			
		}
	}
	return 0;
}
int displayarr(int *a)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\t" , *(a+i));
	}
	return 0;
}
