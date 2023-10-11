#include<stdio.h>
#include<conio.h>
// check given number is prime or not  //Suryanshu Verma
int main(){
      int n , i , count = 0;
      printf("Enter the number to be checked:\n");
      scanf("%d" , &n);
      for(i=1;i<=n;i++){
            if(n%i==0)
            count++;
      } 
      if(count==2)
      printf("prime number");
      else
      printf("not prime numbr"); 
      return 0; }