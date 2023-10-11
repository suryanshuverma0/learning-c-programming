//suryanshu verma
#include<stdio.h>
#include<conio.h>
void main(){
      int n , max=0,min , x;
      do{
            printf("Enter the numbeer\n");
            scanf("%d" , &n);
            if(n>max)max=n;
            if(n<min)min=n;
            printf("\nEnter any number other than 0");
            scanf("%d" , &x);
      }while(x!=0);
      printf("max is %d and min is %d" , max , min);   
}