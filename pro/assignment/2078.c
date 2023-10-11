//2078 structure qn
//suryanshu
#include<stdio.h>
#include<stdlib.h>
struct faculty{
      int sid;
      char name[50];
      char add[50];
      struct serv{
            int dura;
      }serv;
};

int main()
{
      struct faculty f[5];
      int i,j;
      printf("\nEnter the details\n");
      for(i=0;i<3;i++)
      {
            printf("Enter the id\t");
            scanf("%d" ,&f[i].sid);
            printf("Enter the name\t");
            scanf("%s" ,f[i].name);
            printf("Enter the address\t");
            scanf("%s" ,f[i].add);
            printf("Enter the duration\t");
            scanf("%d" ,&f[i].serv.dura);
      }
      for(i=0;i<3;i++)
      {
            if(f[i].serv.dura>10 && f[i].serv.dura<30)
            {
            printf("%d\n" ,f[i].sid);
            printf("%s\n" ,f[i].name);
            printf("%s\n" ,f[i].add);
            printf("%d\n" ,f[i].serv.dura);                 
            }
      }
      return 0;
}