#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("Enter the number n:");
	scanf("%d" , &n);
	
	if(n%5==0)
	printf("The number n is divisible by 5");
	else{
		printf("The number is not divisible by 5");
		return 0;
	}
}
