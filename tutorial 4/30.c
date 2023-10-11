 //suryanshu verma
#include <stdio.h>
#include<conio.h>
void main(){
    int temp, n1, n2, n3;
    	printf("Enter the range\n");
	scanf("%d%d" , &n1 , &n2);
    for(int n=n1+1;n<n2;n++){
        if(n<=9) printf("%d ",n);
        else{
            n1 = n % 10;
            n2 = (n % 100 - n1) / 10;       
            n3 = (n % 1000 - n2) /100;
            temp = (n1 * n1 * n1) + (n2 * n2 * n2) + (n3 * n3 *n3); 
	if (temp == n)  printf("%d ", temp);	 }
    }
}