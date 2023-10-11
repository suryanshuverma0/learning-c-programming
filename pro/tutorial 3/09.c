#include<stdio.h> //suryanshu verma
#include<conio.h>
int main(){
      int i , j  , k;
       printf("    1\n");
       for(i=1;i<=4;i++){
            for(j=4;j>=i;j--)
            printf(" ");
            for(j=1;j<=i;j++)
            printf("%d" , j);
            for(k=i;k>=1;k--)
            printf("%d" , k);
            printf("\n");     }
       return 0;
}