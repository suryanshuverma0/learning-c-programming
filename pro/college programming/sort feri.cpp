#include <stdio.h>
#include<conio.h>
int main() {
    // Write C code here
    int i,j,n,a[100],c;
    printf("Enter the number\n");
    scanf("%d" , &n);
    for(i=0;i<n;i++)
    {
    	printf("Enter the elements\t");
        scanf("%d" , &a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
               c=a[j];
               a[j]=a[j+1];
               a[j+1]=c;
            }
        }
    }
    printf("The sorted list is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n" , a[i]);
    }
	getch();
    return 0;
}
