#include<stdio.h>
int sum(int a,int b); 
int diff(int a,int b); 
int pro(int a,int b); 
int div(int a,int b); 
int main(){
     int a,b,c,d,e,f,g,h,o;
     printf("Enter a & b\n;");
     scanf("%d%d",&a,&b);
     printf("Enter [+,-,*,/]\n");
     scanf("%c",&o);    
     if(o=='+')sum(a,b);
     else if(o=='-')diff(a,b);
     else if(o=='*')pro(a,b);
     else if(o=='/')pro(a,b);
     else if(o=='/')div(a,b);
     else printf("Invalid");
     printf("The value is ", o);
     return 0;
}
int sum(int a,int b) 
{
         return a+b;
}
int diff(int a,int b) 
{
         return a+-b;
}
int pro(int a,int b) 
{
         return a*b;
}
int div(int a,int b) 
{
         return a/b;
}