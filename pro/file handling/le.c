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
