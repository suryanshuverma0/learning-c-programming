//Suryanshu verma
//sorting employee name by udf
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char name[100];
	char address[100];
	int phone;
};
void read(struct employee s[100]);
void sort(struct employee s[100] , struct employee c);
void display(struct employee s[100]);
int main(){
	struct employee s[100] , c;
	read(s);
	sort(s,c);
	display(s);
	return 0;
	}
void read(struct employee s[100]){
	int i;
	for(i=0;i<3;i++){
		printf("Enter the naames,adress & phone number of employee\n");
		scanf("%s",s[i].name);
		scanf("%s",s[i].address);
		scanf("%d",&s[i].phone);
	}
}
void sort(struct employee s[100] , struct employee c){
	int i,j;
for(i=0;i<3-1;i++){
		for(j=0;j<3-1;j++){
			if((strcmp(s[j].name,s[j+1].name))>0){
				c=s[j];
				s[j]=s[j+1];
				s[j+1]=c;
			}
		}
	}	
}
void display(struct employee s[100]){
	int i;
	printf("\nThe sorted list is:\n");
	for(i=0;i<3;i++){
		printf("%s\t",s[i].name);
		printf("%s\t",s[i].address);
		printf("%d\n",s[i].phone);
	}	
}
