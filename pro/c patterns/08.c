#include<stdio.h>
#include<conio.h>

void main()
{
      int i , j;
      for(i=1;i<=5;i++)
      {
            printf("\n");
            for(j=i;j>=1;j--)
            {
            printf("\t%d" , j);
            }
      }

}