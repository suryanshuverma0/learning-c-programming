#include<stdio.h>
#include<conio.h>

void main()
{
      int n , i , j , x , y;
      int a[5];
      printf("Enter a number\n");
      scanf("%d" , &n);
      for(i=0;i<5;i++)
      {
            scanf("%d" , a[i]);
      }
      x=y=a[0];
      for(i=0;i<5;i++)
      {
            if(x>a[i])
            x=a[i];
            else if(y<a[i])
            y=a[i];
      }
      printf("max=%d and  min =%d" , x , y);
}
