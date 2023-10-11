//Create a structure named company which has name,address, phone,
// and no of employee as it member variable. Read the name of company,
//its address,phone and number and display them.
#include<stdio.h>
#include<string.h>
struct company{
	char name[100];
	char address[100];
	int phone;
	int employee;
};
int main(){
	struct company c1={"Advanced Company","Kalanki",4474000,100};
	puts(c1.name);
	puts(c1.address);
	printf("%d\n",c1.phone);
	printf("%d",c1.employee);
	return 0;
}