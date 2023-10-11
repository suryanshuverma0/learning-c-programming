#include<stdio.h>
#include<conio.h>
// factorial of given num=ber  
// Suryanshu Verma 
int main()
{
      int n , i , fact = 1;
      printf("Enter the number:\n");
      scanf("%d" , &n);
      for(i=1;i<=n;i++){
            fact = fact * i;
      }
      printf("factorial is %d" , fact);
       return 0;
}