#include<stdio.h>
#include<conio.h>
// check whether number is even or odd 
// Suryanshu Verma
int main()
{
      int n;
      printf("Enter the number:\n");
      scanf("%d" , &n);
      if(n%2==0)
      printf("even");
      else
      printf("Odd");
      return 0;
}