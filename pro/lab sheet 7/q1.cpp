#include<stdio.h>
#include<conio.h>

int main()
{
	char s1[100],s2[100];
	int i;
	printf("Enter irst string\n");
	gets(s1);
	printf("Enter second  string\n");
	gets(s2);
	printf("before copying\n");
	puts(s1);
	puts(s2);
	for(i=0;s2[i]!='\0';i++)
	{
		s1[i]=s2[i];
	}
	s1[i]='\0';
	printf("after copying\n");
	puts(s1);
	puts(s2);
	return 0;
}
