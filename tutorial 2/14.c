#include<stdio.h>
#include<conio.h>
#include<math.h>
// area of triangle entered by user
// Suryanshu Verma 
int main(){
int a , b , c , s;
float area;
printf("Enter a , b , c:\n");
scanf("%d%d%d" , &a , &b , &c);
s = (a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area is %f" , area);
      return 0;
}