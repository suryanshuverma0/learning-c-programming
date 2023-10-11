#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main(){
	FILE *fp;
	fp=fopen("str.txt" , "a+");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	char str[100];
	printf("Entr a sentence");
	gets(str);
	fputs(str,fp);
	printf("file created sucessfully");
	fclose(fp);
}
