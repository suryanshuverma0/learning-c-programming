#include<stdio.h>
#include<conio.h>
int abcd(int a); // function prototype
void sidd(); 
int main()
{
      int a , ans;
      printf("Enter the number to be checked\n");
      scanf("%d" , &a);
      
      ans = abcd(a);
      ans = abcd(a);  //calling 
return 0;
}

int abcd(int a) //user defined function definition
{
      if(a%2==0)
{
      printf("even");
} 
else{
      printf("odd");
}
return 0;}

// check positive negative