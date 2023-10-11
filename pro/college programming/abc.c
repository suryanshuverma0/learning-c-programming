// suryanshu verma
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
            int i , s , c;
            for(i=1;i<=10;i++)
            {
                  s=i*i;
                   printf("%d\t" , s);
            }
            printf("\n");
            for(i=1;i<=10;i++)
            {
                  c=pow(i,3);
                  printf("%d\t" , c);
            }
            return 0;
}

