#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
      int i , j;
      char str[20];
      printf("Enter a string\n");
      gets(str);
      for(i=0;str[i]!='\0';i++)
      {
            for(j=0;j<=i;j++)
            {
                  printf("%c" , str[j]);
            }
            printf("\n");
      }
}