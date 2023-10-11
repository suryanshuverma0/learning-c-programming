#include<stdio.h>
#include<conio.h>
// Greatest among two number  Suryanshu Verma
int main()
{      int a , b;
      printf("Enter two numbers:\n");
      scanf("%d%d" , &a , &b);
      if(a>b)
      printf("a ia greatest");
      else if(a==b)
      printf("a is equal to b");
      else
      printf("B is greatest");
      return 0;
}