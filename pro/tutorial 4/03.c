//Suryanshu Verma largest among three numbers
#include<stdio.h>
#include<conio.h>
void main()
{
      int a , b , c;
      printf("Enter the numbers\n");
      scanf("%d%d%d" , &a , &b , &c);
      if((a>b) && (a>c))
            printf("a is greatest");
      else if(b>a && b>c)
            printf("b is greatest");
      else
            printf("c is greatest");
}