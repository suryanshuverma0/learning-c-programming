#include <stdio.h>
int main() {
int i,sum=0,a[10];
float avr;
for(i=0;i<10;i++)
{
    printf("Enter number:\n");
    scanf("%d" , &a[i]);
    sum=sum+a[i];
}
avr=sum/10;
printf("Average = %f" , avr);
    return 0;
}
