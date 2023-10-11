//Suryanshu Verma 7 no
#include<stdio.h>
#include<conio.h>
void main(){
      int i , j , n;
      printf("Enter the number n\n");
      scanf("%d" , &n);
      for(i=n;i>=1;i--){
            for(j=1;j<=i;j++)
                  printf("%d" , j);
                  printf("\n");       }
}