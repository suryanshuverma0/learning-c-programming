#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(int i){
      char s1[100] , s2[100];
      printf("Enter first sring");
      gets(s1);
      printf("Enter second sring");
      gets(s2);
            int j;
      for(i=0;s1[i]!='\0';i++);
      for(j=0;s2[j]!='\0';j++)
      {
            s1[i]=s2[j];
            i++;
      }
      s1[i]='\0';
      puts(s1);
      return 0;
}
