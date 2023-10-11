#include<stdio.h>
#include<conio.h>
// Largest among 3 number
int main()
{
      int a  , b , c;
      printf("Enter three mumberts:\n");
      scanf("%d%d%d" , &a , &b , &c);
      if(a>b && a>c)
      printf("a is greatest");
      if(b>c && b>a)
      printf("b is greatest");
      if(c>a && c>b)
      printf("c is greatest");
      return 1;
}