/*WAP to generate following output
1
12
123*/ //suryanshu verma
#include<stdio.h>
#include<conio.h>
void main(){
      int i , j , n;
      printf("Enter the number n\n");
      scanf("%d" , &n);
      for(i=1;i<=n;i++){
            for(j=1;j<i+1;j++)
                  printf("%d" , j);
                  printf("\n");     }
}