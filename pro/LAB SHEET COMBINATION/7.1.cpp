#include<stdio.h>

int main()
{
	char s1[100],s2[50];
	int i;
	gets(s1);
	gets(s2);
	for(i=0;s2[i]!='\0';i++)
	{
		s1[i]=s2[i];
	}
	s1[i]='\0';
	printf("copied\n");
	puts(s1);
	return 0;
}
