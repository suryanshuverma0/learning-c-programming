//suryanshu verma
#include<stdio.h>
int main()
{
int a=2, b=3, c; 
a=(b++)+(++b)+a; 
c=a>b?a:b; 
b=(a++)+(b--)+a; 
c=c++*b--; 
printf("a=%d \n b=%d\n c=%d\n" , a , b , c);
return 0;
}