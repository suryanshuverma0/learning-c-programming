#include<stdio.h>
#include<conio.h>
#include<string.h>
 struct employee{
 	char name[100];
 	int age;
 	int salary;
 }s[100];
 int main()
 {
 	int i,n;
 	printf("Enter a number of empoyee:\n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++){
 		printf("Enter the name of the employee:\n");
 	scanf("%s",s[i].name);
 		printf("Enter the age of the employee:\n");
 		scanf("%d",&s[i].age);
 			printf("Enter the salary of the employee:\n");
 		scanf("%d",&s[i].salary);
 	}
 	FILE *tp;
 	fopen("employeer.txt","w");
 	fwrite(&s,sizeof(s),1,tp);
 	fread(&s,sizeof(s),1,tp);
 	for(i=0;i<n;i++){
 		printf("%d",s[i].name);
 		printf("%d",s[i].age);
 		printf("%d",s[i].salary);
 	
	 }
 	fclose (tp);
 	
 	return 0;
	 }
