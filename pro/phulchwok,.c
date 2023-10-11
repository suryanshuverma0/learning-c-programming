#include <stdio.h>
#include<string.h>

int main() {
    // Write C code here
    int i,j;
    char a[9]="PULCHOWK";
     for(i=0;i<=7;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c" ,a[j]);
        }
            printf("\n");
    }
    for(i=8;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c" ,a[j]);
        }
            printf("\n");
    }
 
    
    
    
    

    return 0;
}
