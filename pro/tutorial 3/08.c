//suryanshu Verma q8
#include<stdio.h>
#include<conio.h>
void main(){
      int i , j , n , num=1;
      printf("Enter the number n\n");
      scanf("%d" , &n);
      for(i=1;i<=n;i++){
            for(j=1;j<=i;++j){
                  printf("%d " , num);
                  ++num;      }
                  printf("\n");      }
}