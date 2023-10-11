#include<stdio.h>
void con(char s1[100], char s2[50]);
int main()
{
	int i,j;
	char s1[100],s2[50];
	gets(s1);
	gets(s2);
	con(s1,s2);
	return 0;	
}
void con(char s1[100], char s2[50])
{
	int i,j;
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';j++)
	{
		s1[i]=s2[j];
		i++;
	}
	s1[i]='\0';
	puts(s1);
}
