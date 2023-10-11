#include<stdio.h>
#include<conio.h>
typedef struct complex
{
    int rp;
    int ip;
}comp;
int main()
{
    comp c[4];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter real and imaginary part of complex no %d\n",i+1);
        scanf("%d%d",&c[i].rp,&c[i].ip);
    }
    c[2].rp = c[0].rp + c[1].rp;
    c[2].ip = c[0].ip + c[1].ip;

    c[3].rp = c[0].rp - c[1].rp;
    c[3].ip = c[0].ip - c[1].ip;

    printf("Sum = (%d , %d)\n",c[2].rp,c[2].ip);
    printf("Difference = (%d , %d)",c[3].rp,c[3].ip);
    getch();
	return 0;   
}

