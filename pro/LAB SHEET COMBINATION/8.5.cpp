#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Value of a = %d\nValue of b = %d\n",a,b);
    swap(&a,&b);
    printf("Swapped value of a = %d\nSwpped value of b = %d",a,b);
    return 0;
}
