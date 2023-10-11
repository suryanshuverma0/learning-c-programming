/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
      int i , q , r;
      FILE *fp;
      fp = fopen("inventary.txt" , "r+");
      	if(fp==NULL)
	{
		printf("error!!!");
		exit(0);
	}
	printf("File created sucessfully!!!\n");
      for(i=0;i<=3;i++){
      fscanf(fp , "%d" , &q); 
      fscanf(fp , "%d" , &r);
      }
      fprintf(fp,"%d",q*r);
      fclose(fp);
} 

#include<stdio.h>
int main(){
    int q,r;
    FILE *fp;
    fp=fopen("inventory.txt","r+");
    if(fp==NULL) printf("Error");
    fscanf(fp,"%d",&q);
    fscanf(fp,"%d",&r);
    fprintf(fp,"%d",q*r);
    fclose(fp);
    return 0;
}*/

#include<stdio.h>
int main(){
    int q,r;
    FILE *fp;
    fp=fopen("inventory.txt","r+");
    if(fp==NULL) printf("Error");
    fscanf(fp,"%d",&q);
    fscanf(fp,"%d",&r);
    fprintf(fp,"%d",q*r);
    fclose(fp);
    return 0;
}
