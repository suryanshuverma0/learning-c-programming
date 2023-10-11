// Suryanshu VermA
#include<stdio.h>
#include<conio.h>
int main(){
      int n , i , r ,sum=0 , j , s=0;
      printf("Enter the number\n");
      scanf("%d" , &n);
      i=n;
      while (i!=0){
            r=i%10;
            sum=sum+r;
            i=i/10;
      }
            printf("Sum of digit is %d\t" , sum);
      if(sum>=10){
            j=sum;
            while(j!=0){
                 r=j%10;
                 s=s+r;
                 j=j/10; 
            }
      }
      printf("Sum of digit is %d" , s);
      return 0;
}