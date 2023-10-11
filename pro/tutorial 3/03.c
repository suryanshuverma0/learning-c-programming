#include<stdio.h> //suryanshu verma
#include<conio.h>
#include<string.h>
#define MAX 5
int main(){     
int data[MAX]={2,3,5,4,10},i,sum=0; 
float average;
for(i=0 ;i<MAX; i++){
printf("Case %d = %d\n", i, data[i]); 
sum += data[i]; 
}
average = (float)sum/MAX; 
printf("%06.2f", average); 
return 1; 
}