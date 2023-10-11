
//Raj Manandhar
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,r,i,s,b,d,n1, n2;
    printf("enter the range");
    scanf("%d%d",&n1,&n2);
    for (i=n1; i<n2; i++)
    {
    a=i;
    d=i;
    s=0;
    b=0;
    while(d!=0)
    {
    b++;
    d=d/10;
    }
   
    while (a!=0)
    {
    r=a%10;
    s=s+pow(r,b);
    a=a/10;
    }
    if(s==i)
    {
    printf("%d\n",i);
    }
    }
    return 0;
}
