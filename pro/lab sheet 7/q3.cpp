#include<stdio.h>
#include<conio.h>
int main()
{
	int i,count=0,word=1;
	char sen[100];
	printf("Enter a sentence\n");
	gets(sen);
	for(i=0;sen[i]!='\0';i++)
	{
	count++;
	if(sen[i]==' ')
	{

		word++;
	}		
	}
	printf("the word is %d and character is %d" , word,count);
}
