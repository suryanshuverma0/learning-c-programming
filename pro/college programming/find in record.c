#include<stdio.h>
#include<string.h>

//WAP to search if the structure contains "ram" in its name.
struct Student{
    char name[10];
    int marks;
};
int main() {
    int i;
    struct Student s[100];
    for(i=0;i<3;i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].marks);
    }
    for(i=0;i<3;i++){
        if(strcmp((s[i].name),"ram")==0){
            printf("Record Found!!! %s\t %d",s[i].name,s[i].marks);
        }
    }
    printf("\n");
    return 0;
    }
