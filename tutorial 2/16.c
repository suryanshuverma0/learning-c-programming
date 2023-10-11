#include<stdio.h>
#include<conio.h> //Suryanshu Verma
// Conditional opreator to evaluate following function
// y=2.4x+3 , for x<=2  // y=3x-5 , for x>2
int main(){ float x , y;
      printf("Enter the x");
      scanf("%f" , &x);
      if(x<=2){
            y=2.4*x+3;
            printf("%f" , y);
      }else{
            y=3*x-5;
            printf("%f" , y);
      }
}