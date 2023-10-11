//wap to create name marks of 5 sublects 5 students. display each of individualtotal subject
//use userefined function
// [ Monday, August 1, 2022 11:38 PM ] ?C Programming Acem?: //Wap TO CREATE name,marks of 5 subjects and rollNo of 5 students. Display
// each of the individuals total percentage using udf
#include<stdio.h>
struct Student{
    char name[10];
    int rollNo;
    int marks[5];
};
void totalComp(struct Student e[]);
int main() {
    struct Student e[5];
    int i,j;
    for(i=0;i<5;i++){
        scanf("%s",e[i].name);
        scanf("%d",&e[i].rollNo);
        for(j=0;j<5;j++){
            scanf("%d",&e[i].marks[j]);
        }
    }
    totalComp(e);
    printf("\n");
    return 0;
}
void totalComp(struct Student e[]){
 
}
