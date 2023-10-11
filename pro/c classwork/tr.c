#include<stdio.h>
#include<conio.h>

int sidd(int n); ///function prototype
int main()
{
      int n ,factorial;
      printf("Enter the number\n ");
      scanf("%d" , &n);
      factorial=sidd(n); //calling
      printf("factorial of number is %d" , factorial);
      return 0;
}

int sidd(int n) //funcction definition 
{
      int i , fact=1;
      for(i=1;i<=n;i++)
      {
            fact=fact*i;
      }
      return fact;
}
