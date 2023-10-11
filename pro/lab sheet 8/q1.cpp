#include<stdio.h>

int main()
{
	int *b[10], a[10], i, sum=0 , n;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter number %d\n",i+1);
		scanf("%d",&a[i]);
		b[i]=&a[i];
	}
	for (i=0;i<n;i++)
	{

	sum=sum + * b[i];
	}printf("sum= %d",sum);
	return 0;
}
