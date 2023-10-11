#include<stdio.h>
#include<stdlib.h>
struct company{
	char name[50];
	char address[40];
	int phone;
	int noOfemployee;
} c[100];
int main()
{
	int i,n;
	printf("Enter the no of company\n");
	scanf("%d" , &n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("Enter the name\n");
		fflush(stdin);
		gets(c[i].name);
		printf("Enter the address\n");
		fflush(stdin);
		gets(c[i].address);
		printf("Enter the phone number\n");
		scanf("%d" , &c[i].phone);
		printf("Enter the no of employee\n");
		scanf("%d" , &c[i].noOfemployee);
	}
	printf("The details are\n");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		puts(c[i].name);
		fflush(stdin);
		puts(c[i].address);
		printf("%d", c[i].phone);
		printf("%d", c[i].noOfemployee);
		printf("\n");
		
	}
	return 0;
}
