//suryanshu verma
//32. WAP to print all the strong numbers between n1 and n2. Where n1 and n2 is entered by user.-SUBRAT

#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
 int n1,n2,i,r,c,s;
 printf("Enter the upper range: ");
 scanf("%d",&n1);
 printf("Enter the lower range: ");
 scanf("%d", &n2);
 printf("The strong numbers between the given range is: \n");
 for(i=n2+1; i<n1;i++){
 	c = i ;
 	s = 0;
 	while(c!=0){
 		r = c % 10;
 		s = s + fact(r);
 		c = c/10;
		}
		if (s==i)
	 {
	 printf("%d\t",i);
	 }	 
   }
   getch();
   return 0;
 }
// UDF for Factorial
int fact(int n)
{
	int i, s=1;
	for(i=1 ; i<=n ; i++)
	{
		s = s * i;
	}
	return s;
 } 