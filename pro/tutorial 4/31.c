//Suryanshu Verma
//31. WAP to print all the perfect numbers between n1 and n2. Where n1 and n2 is entered by user. -SUBRAT HUMAGAIN
#include<stdio.h>
#include<conio.h>
int main()
{
 int n1,n2,i,n,s;
 printf("Enter the upper range: ");
 scanf("%d",&n1);
 printf("Enter the lower range: ");
 scanf("%d", &n2);
 printf("The perfect numbers between the given range is: \n");
 for(i=n2+1; i<n1;i++){
 	n=1;
 	s=0;
 	while(n<i){
 		if(i%n==0)
 		s=s+n;
 		n++;
	 }
	 if (s==i)
	 printf("%d\t",i);
 }
 return 0;
}
