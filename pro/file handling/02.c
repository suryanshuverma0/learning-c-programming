#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
	FILE *fp;
	fp=fopen("wx1.txt" , "r");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	char ch;
	while(((ch=fgetc(fp)))!=EOF){
			putchar(ch);
	}
	printf("sucessfully created");
	fclose(fp);
}
