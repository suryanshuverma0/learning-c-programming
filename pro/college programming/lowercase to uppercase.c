#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
// MAking a simple working calculator 
// Declaring Variables
float a;
float b;
char op;
float result;
// Taking input from user
      printf("Enter first number :");
      scanf("%f" , &a);
      printf("Enter the oprearnt :");
      scanf(" %c" , &op);
      printf("Enter second number :");
      scanf("%f" , &b);
      // using switch 
      switch (op)
      {
      case '+' :  result = a + b;
                printf("%f" , result);  
      break;
      case '-' :  result = a - b;
                printf("%f" , result);  
      break;
      case '*' :  result = a * b;
                printf("%f" , result);  
      break;
      case '/' :  result = a / b;
                printf("%f" , result);  
      break;
      default:
      printf("Invalid opreator");
      }
       return 0;
}
