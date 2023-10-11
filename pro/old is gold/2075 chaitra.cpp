#include<stdio.h>
 struct person{
 	char name[20];
 	char address[20];
 	float salary;
 };
int display(struct person s[] , int si);
int main()
{
	struct person s[3];
	int si ,i;
	for(i=0;i<5;i++)
	{
		printf("Ener name,address salary\n");
		scanf("%s%s%f", s[i].name, s[i].address,&s[i].salary);
	}
	display(s,si);
	for(i=0;i<5;i++)
	{
		printf("Ener name,address salary\n");
		scanf("%s%s%f", s[i].name, s[i].address,&s[i].salary);
	}
}

int display(struct person s[] , int si)
{
	int i;
	for(i=0;i<5;i++)
	{
		s[i].salary=1.15*s[i].salary;
	}
	return 0;
}
