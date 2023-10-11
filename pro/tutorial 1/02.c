#include<stdio.h>
#include<conio.h>
// Simple Intrest
// Suryanshu Verm
int main(){
      float p , t , r , si;
      printf("Enter principal , rate , time:\n");
      scanf("%f%f%f" , &p , &t , &r);
      si=(p*t*r)/100;
      printf("Simple intrest is %f" , si);
      return 0;
}