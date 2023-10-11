// Suryanshu VermA
#include<stdio.h>
#include<conio.h>
int main(){
      int n , i , r ,sum=0;
      printf("Enter the number\n");
      scanf("%d" , &n);
      i=n;
      while (i!=0){
            r=i%10;
            sum=sum+r;
            i=i/10;
      }
      printf("Sum of digit is %d" , sum);
      return 0;
}