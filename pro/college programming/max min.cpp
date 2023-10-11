#include<stdio.h>

int main()
{
    int i,n,s[50],c,j;
    printf("Enter the number of elements:\t");
    scanf("%d" , &n);
    for(i=0;i<n;i++)
    {
        scanf("%d" , &s[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(s[j]>s[j+1])
            {
                c=s[j];
                s[j]=s[j+1];
                s[j+1]=c;
            }
        }
    }
    printf("results\n");
    printf("The max is%d\t" , s[n-1]);
        printf("The min is \t%d" , s[0]);
        return 0;
}
