#include <stdio.h>
#include<stdlib.h>
int main(){
	char str[100],ch;
	int vowel=0;
	FILE *fp;		
	fp=fopen("suryanshu.txt","w+");
	if(fp==NULL){
		printf("File cannot be created");
		exit(0);	
	}
	printf("Enter a string");
	fflush(stdin);
	gets(str);
	fputs(str,fp);
	rewind(fp);
	while((ch=fgetc(fp))!=EOF){
		if(ch=='a' || ch=='e'  || ch=='i'  || ch=='o'  || ch=='u' ) 
		vowel++;
	}
	printf("Total vowels=%d",vowel);
	fclose(fp);
	return 0;
	
}