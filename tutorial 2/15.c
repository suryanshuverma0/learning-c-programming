#include<stdio.h>
#include<conio.h>
#define PI 3.14
// area of circle
// Suryanshu Verma
int main(){
      float r , area;
      printf("Enter radius:\n");
      scanf("%f" , &r);
      area = PI*r*r;
      printf("Area is %f" , area);
      return 0;
}