#include<stdio.h>
#include<conio.h>

struct student{
	char name[20];
	int rollno;
	char program[20];
	int marks[5];
	int total;
};

int main()
{
	int i ,j, n=10,c;
	char ch;
	struct student s[n];
	do{
		printf("Enter name,roll,program,marks\n");
		scanf("%d%s%d" , s[i].name,&s[i].rollno,s[i].program);
		for(i=0;i<5;i++)
		{
			scanf("%d" , &s[i].marks[i]);
		}
		printf("Do you want to continue?\n");
		scanf("%c" , &ch);
		c++;
	}while(ch!='e');
	n=c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			s[i].total=s[i].total+s[j].marks;
		}
	}
	printf("\n\n\n");
	printf("Name\tRollno\tMArks\tTotal\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t%d\t\t%d\t\t",s[i].name,s[i].rollno,s[i].program);
		for(j=0;j<5;j++)
		{
			printf("%d\t\t" , s[i].marks[j]);	
		}
	printf("%d\n" , s[i].total);
	}
return 0;	
}
