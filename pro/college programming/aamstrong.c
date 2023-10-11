//suryanshu verma
#include<stdio.h>
#include<conio.h>
#include<math.h>
int ams(int n ,int a);
int main(){
	int n1, n2, a, b , c, i;
	printf("entwe the range\n");
	scanf("%d%d" , &n1 , &n2);
	for(i=n1+i;i<n2;i++){
	a=i;
	b=0;
	while(a!=0){
		b++;
		a=a/10; }
		c=ams(i , b);
		if(c==i)printf("\n%d" , i);	}
		return 0;
}
int ams(int n ,int a){
	int sum=0 , b;
	while(n!=0){
		b=n%10;
		n=n/10;
		sum=sum+pow(b,a);		}
	return sum;
}
