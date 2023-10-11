#include<stdio.h>
#include<string.h>

struct complex{
    int real;
    int img;
};
struct complex a(struct complex c1,struct complex c2);
int main()
{   struct complex c;
    struct complex c1={2,3};
    struct complex c2={4,5};
    c=a(c1,c2);
    printf("%d",c.real);
    return 0;
}
struct complex a(struct complex c1,struct complex c2){
    struct complex c3;
    c3.real=c1.real+c2.img;
    c3.img=c1.img   +c2.img;
    return c3;
}

