#include<stdio.h>
#include<conio.h>
#include<string.h>
void concatinate(char s1[200],char s2[100]);
int main()
{
	int i,j;
	char s1[100],s2[100];
	printf("Enter first strinh\n");
	gets(s1);
	printf("Enter second strinh\n");
	gets(s2);
	concatinate(s1,s2);
	printf("%s" , s1);
	return 0;	
}
void concatinate(char s1[100],char s2[100])
{
	int i,j;
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';j++)
	{
		s1[i]=s2[j];
		i++;
	}
	s1[i]='\0';
}
