//Sushant Singh Rajput
//Suryanshu Verma
#include<stdio.h>
#include<string.h>
//#define n 100//it is maximum limit
struct student
{
    char name[20];
    int roll_no;
    float percentage;
};
int main()
{
    struct student arr_student[100];
    int i ,x;
    printf("Enter no of students\n");
    scanf("%d" ,&x);

    for(i = 0; i < x; i++ )
    {
        printf("\nEnter details of student %d\n\n", i+1);

        printf("Enter name: ");
        scanf("%s", arr_student[i].name);

        printf("Enter roll no: ");
        scanf("%d", &arr_student[i].roll_no);

        printf("Enter percentage: ");
        scanf("%f", &arr_student[i].percentage);
    }

    printf("\n");

    printf("Name\tRoll no\tpercentage\n");

    for(i = 0; i < x; i++ )
    {
    	if(arr_student[i].percentage>=80)
    	{
		
        printf("%s\t%d\t%.2f\n",
        arr_student[i].name, arr_student[i].roll_no, arr_student[i].percentage);
    }
    }
    return 0;
}

