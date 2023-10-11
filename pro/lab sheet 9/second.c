//Suryanshu verma
//sorting employee name
#include<stdio.h>
#include<string.h>
struct employee{
	char name[100];
	char address[100];
	int phone;
};
	struct employee s[3],temp;
int main(){
	int i,j;
	for(i=0;i<3;i++){
		scanf("%s",s[i].name);
		scanf("%s",s[i].address);
		scanf("%d",&s[i].phone);
	}
	for(i=0;i<3-1;i++){
		for(j=0;j<3-1;j++){
			if((strcmp(s[j].name,s[j+1].name))>0){
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("\nThe sorted list is:\n");
	for(i=0;i<3;i++){
		printf("%s\t",s[i].name);
		printf("%s\t",s[i].address);
		printf("%d\n",s[i].phone);
	}	
	return 0;
}
