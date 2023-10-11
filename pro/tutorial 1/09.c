#include<stdio.h>
#include<conio.h>
#include<math.h>
// roots of quadradic equation 
// Suryanshu Verma
int main()
{
      float a, b , c , di , r1, r2 , rP , iP;
      printf("Entr a , b , c\n");
      scanf("%f%f%f" , &a , &b , &c);
      di=b*b-4*a*c;
      
      if(di>0){
            r1= (-b+sqrt(di))/(2*a);
            r2= (-b-sqrt(di))/(2*a);
            printf("r1=%f amd r2=%f" , r1 , r2);
      }
      else if(di==9){
            r1=r2=-b/(2*a);
            printf("root r1=r2=%f" , r1);
      }
      else{
            rP= -b/(2*a);
            iP=sqrt(-di)/(2*a);
            printf("r1=%f+%f and r2=%f+%f" , rP , iP , rP , iP);
      }
      return 0;
}