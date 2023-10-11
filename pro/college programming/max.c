#include<stdio.h>
#include<conio.h>

void main()
{
      int n , i , j , x , y , a=0;
      int arr[n];
      printf("Enter a number\n");
      scanf("%d" , &n);
            while(a<=n){
            printf("Enter number");
            scanf("%d" , arr[a]);
            a++;
            }
      
      x=y=arr[a];
      for(i=0;i<n;i++)
      {
            if(x>arr[i])
            x=arr[i];
            else if(y<arr[i])
            y=arr[i];
      }
      printf("max=%d and  min =%d" , x , y);
}
