// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    /*
        N                                
      e e e
    P P P P P  
  a a a a a a a 
L L L L L L L L L 


     N
    ee
   ppp
 aaaa
Lllll
    */
 int i,j;
 char a[100]="NePaL";
 for(i=0;i<=9;i++)
 {
     for(j=0;j<=i;j++)
     {
         printf(" ");
         printf("%c" , a[i]);
     }
     printf("\n");
 }
    return 0;
}
