#include<stdio.h>
#include<conio.h>

int main(){
   float a , b , result;
   char op;
   printtf("Enter first number");
   scanf("%f" , &a);   
   printtf("Enter  opreator");
   scanf("%c" , &op);   
   printtf("Enter seconf number");
   scanf("%f" , &b);   
   switch(op)
   {
         case '1' : result = a + b;
         printf("%f" , &result);
         break;

            case '2' : result = a - b;
         printf("%f" , &result);
         break;

            case '3' : result = a * b;
         printf("%f" , &result);
         break;

            case '4' : result = a / b;
         printf("%f" , &result);
         break;

         default:
            printf("Invalid opreator");
   }
   return 0;
}