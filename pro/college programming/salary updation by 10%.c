//WAP to increase salary of an employee by 10% using
//structure to pointer
#include<stdio.h>
#include<string.h>

struct employee{
    int sal;
};
void a(struct employee *c1);
int main()
{
    struct employee c1={100};
    a(&c1);
    return 0;
}
void a(struct employee *c1){
    c1->sal=c1->sal * 1.1;
    printf("New Updated Salary=%d",c1->sal);
}
