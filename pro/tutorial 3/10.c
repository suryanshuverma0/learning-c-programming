#include<stdio.h>
#include<conio.h> //suryanshu Verma 10no
void main(){
      int i , j , n;
      printf("Enter the number n\n");
      scanf("%d" , &n);
      for(i=1;i<n;i++){
            for(j=1;j<=i;j++) printf("%d" , j);
                  printf("\n");     }
      for(i=n;i>=0;i--){
            for(j=1;j<=i;j++)printf("%d" , j);
            printf("\n");     }     }