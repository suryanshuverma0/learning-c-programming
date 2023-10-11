#include<stdio.h>
#include<conio.h>

void main()
{
      int i , n , sum=0;
      printf("Enter no of terms\n");
      scanf("%d" , &n);

      for(i=0;i<=n;i++)
      {
            sum=sum+i;
            if(i!=n)
            printf(", ");
      }
      printf("The series is %d" , sum);
}