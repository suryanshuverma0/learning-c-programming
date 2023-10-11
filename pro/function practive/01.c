#include<stdio.h>
#include<conio.h>

int main()
{
      int a;
      printf("Enter the number to be checked\n");
      scanf("%d" , &a);

if(a%2==0)
{
      printf("even");
} 
else{
      printf("odd");
}
return 0;
}