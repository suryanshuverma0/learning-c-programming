// Suryanshu VermA
#include<stdio.h>
#include<conio.h>
int main(){
      int n , i , r ,rev=0;
      printf("Enter the number\n");
      scanf("%d" , &n);
      i=n;
      while (i!=0){
            r=i%10;
            rev=(rev*10)+r;
            i=i/10;
      }
      printf("The reverse value is %d" , rev);
      return 0;
}