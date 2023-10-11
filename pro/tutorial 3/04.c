#include<stdio.h>
#include<conio.h> //suryanshu verma
#include<math.h>
int main(){
      float root , i=1 , sum;     
      do{
            sum= (2 * i)-1;
            printf("\t%d\n" , sum);
            i=i*(5.0/3);
      } while (sum <=15);
      root = pow(i  , 1/2);
      printf("\n%.3f" , root);
      return 1;
}