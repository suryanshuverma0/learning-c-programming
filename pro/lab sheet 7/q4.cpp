#include<stdio.h>
#include<conio.h>
#include<string.h>
void read(char ch[5][100]);
void arrange(char ch[5][100]);
void display(char ch[5][100]);
int main()
{
	char ch[5][100];
	read(ch);
	arrange(ch);
	display(ch);
	return 0;	
}
void read(char ch[5][100])
{
	int i;
	printf("Enter the words\n");
	for(i=0;i<5;i++)
	{
		scanf("%s" , &ch[i]);
	}
}
 void arrange(char ch[5][100])
 {
 	int i,j;
 	char c[5];
 	for(i=0;i<5-1;i++)
 	{
 		for(j=0;j<5-1;j++)
 		{
 			if((strcmp(ch[j],ch[j+1]))>0)
 			{
				strcpy(c,ch[j]);
				strcpy(ch[j],ch[j+1]);
				strcpy(ch[j+1],c);
			 }
		}
	 }
 }
 
 void display(char ch[5][100])
 {
 	int i;
 	printf("arranged order\n");
 	for(i=0;i<5;i++)
 	{
 		puts(ch[i]);
	}
 }
