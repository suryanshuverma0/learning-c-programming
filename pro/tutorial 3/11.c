#include<stdio.h> //Suryanshu verma q11
#include<conio.h>
void main(){
     int i , j;
     for(i=5;i>=1;i--){
      for(j=5;j>=i;j--)printf(" ");
      for(j=1;j<=i;j++)printf("%d" , j);
      for(j=i-1;j>=1;j--)printf("%d" , j);
      printf("\n");
     }    }