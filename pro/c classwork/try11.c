#include<stdio.h>
#include<conio.h>
int abcd(int a);
int main()
{
      int a , ans;
      printf("Enter the number to be checked\n");
      scanf("%d" , &a);
      ans = abcd(a);
return 0;
}

int abcd(int a)
{
      if(a%2==0)
{
      printf("even");
} 
else{
      printf("odd");
}
return 0;
}
