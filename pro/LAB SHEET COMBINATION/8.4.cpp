#include<stdio.h>
#include<conio.h>
int *rev(int *a,int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp = *(a+i);
        *(a+i) = *(a+n-i-1);
        *(a+n-i-1) = temp;
    }
    return a;
}
int main()
{
    int n,i,a[200];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",(a+i));
    int *c = rev(a,n);
    for(i=0;i<n;i++)printf("%d ",*(c+i));
    getch();
    return 0;
}

