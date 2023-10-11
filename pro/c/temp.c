#include<stdio.h>
#include<conio.h>
//lab 4 Q.N. 1
void main()
{
	int n;
	printf("Enter n\n");
	scanf("%d" , &n);
	
	if(n%5==0)
	{
		printf("multiple of 5\n");
	}
	else{
		printf("not muliple of 5\n");
	}
	if(n%7==0 && n%11!=0)
	{
		printf("mulitple of 7 but not 11\n");
	}
	else if(n%11==0 && n%7!=0)
	{
		printf("divisible by 11 but not 7");
	}
	else{
		printf("nothing");
	}	
		
	}

