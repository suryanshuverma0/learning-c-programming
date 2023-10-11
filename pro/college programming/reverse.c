#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
//	int n , a , b , c , f , r , num;
//	printf("Enter three digit vumber\n");
//	scanf("%d" , &n);
//	a=n/100;
//	b=(n%100)/10;
//	c=n%10;
//	printf("forward order is %d\n" , n);
//	r=c*100+b*10+a;
//	printf("reverse is %d\n" , r);//reverse
//	if(n==r)
//	printf("palindrome\n");//palindrome
//	else
//	printf("not pali\n");
//	num=pow(a,3)+pow(b,3)+pow(c,3);
//	if(num==n)
//	printf("Amstrong\n");
//	else("not am");	

//int i , j , a , b  , count;
//printf("Enter the range\n");
//scanf("%d%d" , &a , &b);
//for(i=a+1;i<b;i++)
//{
//	count=0;
//	for(j=1;j<=i;j++)
//	{
//		if(i%j==0)
//		count ++;
//	}
//	if(count==2)
//	printf("%d\t" , i);
//}
int i , n;
printf("enter n");
scanf("%d" , &n);
for(i=1;i<n;i++)
printf("\t %d/%d" , i , i+1);
}
