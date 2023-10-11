#include<stdio.h>
#include<string.h>

//Sorting of Employee name
#include<stdio.h>
#include<string.h>
struct Employee
{
    char Name[20];
    int marks;
} ;

struct Employee emp[20], temp;

int main()
{
    int n, i, j;
    printf("Enter how many employee:\n");
    scanf("%d",&n);
    printf("Enter info of %d Employee\n",n);
    for(i=0; i<n; i++)
    {
        printf("Enter name of a Employee:\n");
        fflush(stdin);
        gets(emp[i].Name);
        printf("Enter marks :\n");
        fflush(stdin);
        scanf("%d",&emp[i].marks);
    }

    for(i=0; i< n-1; i++)
    {
        for( j=0; j< n-1; j++)
        {
            if((strcmp(emp[j].Name, emp[j+1].Name)) > 0)
            {
                temp = emp[j];
                emp[j]= emp[j+1];
                emp[j+1]= temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
            printf("%s\t %d \t\n",emp[i].Name,emp[i].marks);
    }
    return 0;
}
