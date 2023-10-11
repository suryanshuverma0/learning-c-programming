#include<stdio.h>
#include<conio.h>
// Largest among 3 numbers  Suryanshu Verma
int main()
{
      int a ,  b , c;
      printf("Enter 3 numbers:\n");
      scanf("%d%d%d" , &a , &b , &c);
      if(a>=b && a>=c)
      printf("a is largest");
      if(b>=a && b>=c)
      printf("b is largest");
      if(c>=a && c>=b)
      printf("c is largest");
      return 0;
}