//Suryanshu Verma factorial
#include<stdio.h>
#include<conio.h>
void main()
{
      int n , i , fact=1;
      printf("Enter the number\n");
      scanf("%d" , &n);
      for(i=1;i<=n;i++)
            fact=fact*i;
      printf("The factorial is %d" , fact);
}