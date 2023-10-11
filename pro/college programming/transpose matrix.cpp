#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,i,j,matrix[10][10],transpose[10][10];
	printf("Enter the no of rows and column of matrix\n");
	scanf("%d%d" , &m,&n);
	printf("\n Enter the elements of matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d" , &matrix[i][j]);
		}
	}
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				transpose[j][i]=matrix[i][j];
			}
		}
		printf("The transpose matrix is\n");
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d " , transpose[i][j]);
		}
		printf("\n");
	}
	getch();	
	return 0;
}
