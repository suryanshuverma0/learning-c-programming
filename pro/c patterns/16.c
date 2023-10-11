#include<stdio.h>
#include<conio.h>

int main()
{
      int i , j;
      for(i=5;i>=1;i--)
      {
            for(j=i;j>=1;j--)
            {
                  printf("\t%c" ,j+64 );
            }
            printf("\n");
      }
      return 0;
}
