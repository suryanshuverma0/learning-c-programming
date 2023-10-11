//[ Monday, August 1, 2022 11:19 PM ] ?C Programming Acem?: //Wap TO CREATE EMPLOYEE STRUCTURE AND CALCULATE THE
//TOTAL SALARY OF ALL THE EMPLOYEES USING UDF
#include<stdio.h>
struct employee{
    char name[10];
    int id;
    float sal;
};
void totalComp(struct employee e[]);
int main() {
    struct employee e[5];
    int i;
    for(i=0;i<5;i++){
        scanf("%s",e[i].name);
        scanf("%d",&e[i].id);
        scanf("%f",&e[i].sal);
    }
    totalComp(e);
    printf("\n");
    return 0;
}
void totalComp(struct employee e[]){
    int total=0,i;
        for(i=0;i<5;i++)
        {
            total=total+e[i].sal;
        }
        printf("total salary=%d",total);
    
}
