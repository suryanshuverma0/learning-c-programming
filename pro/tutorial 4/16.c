// suryanshu verma
#include<stdio.h>
#include<conio.h>
int main(){
	int i , n , a=0 , b=1 , c;
	printf("Enter n");
	scanf("%d" , &n);
	for(i=1; i<=n; i++)
	{
		printf("%d\t" , a);
		c = a + b;
		a = b;
		b = c;
	}return 0;
}
 
