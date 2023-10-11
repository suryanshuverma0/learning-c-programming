#include <stdio.h>
int main() {
float a[10],max=0;
int i;
for(i=0;i<10;i++)
{
    printf("Enter number:\n");
    scanf("%f" , &a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
}
printf("The largest number is %f" , max);
    return 0;
}
