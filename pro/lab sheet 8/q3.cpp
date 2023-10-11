#include<stdio.h>
int main()
{
	int* b[10], a[10], i, j, temp , n=3;
	for (i=0;i<n;i++)
	{
		printf("enter number %d\n",i+1);
		scanf("%d",&a[i]);
		b[i]=&a[i];
	}
        for (i=0;i<n-1;i++)
		{for(j=0;j<n-1;j++)
	
		if(*b[j]>*b[j+1])
		{
			temp=*b[j];
			*b[j]=*b[j+1];
			*b[j+1]=temp;
		}
		}
		
		printf("greatest numbr=%d\n",*b[j]);
	

return 1;
}
