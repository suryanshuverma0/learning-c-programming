#include<stdio.h> //Suryanshu
#include<conio.h>
void main()
{
     int i , j;
     for(i=4;i>=1;i--) 
     {
      for(j=5;j>=i;j--)
      printf(" ");
      for(j=1;j<=i;j++)
      printf("%d" , j);
      printf("\n");
     }
}