#include<stdio.h>
//wap to enter 5 number using pointer and dislay them
int main(){
	int arr[5];
	int i;
	printf("Enter the number\n");
	for(i=0;i<5;i++){
		scanf("%d\t" , arr+i);
	}
	printf("Entered number\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t" ,arr+i);
	}
}
