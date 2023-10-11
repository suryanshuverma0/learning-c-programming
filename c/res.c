#include<stdio.h>
int main(){
         float r1,r2,r3;
         printf("Enter the value of resistance r1,r2 and r3\n");
         scanf("%f%f%f",&r1,&r2,&r3);
         float mul=r2*r3;
         float add=r2+r3;
         float div=mul/add;
         float req=div+r1;
         printf("The value of resistanceis %.2f omh" , req);
         return 0;
}