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
    printf("sorted list\n");
for(i=0;i<n;i++)
{
    printf("%d\t" , s[i]);
}
printf("\nlargest and smallest \n");
printf("%d\n" , s[n-1]);
printf("%d\n" , s[0]);
        return 0;
}
