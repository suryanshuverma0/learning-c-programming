#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
	FILE *fp;
	fp=fopen("wx1.txt" , "w");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	fputc('A' , fp);
	fputc('B' , fp);
	printf("sucessfully created");
}
