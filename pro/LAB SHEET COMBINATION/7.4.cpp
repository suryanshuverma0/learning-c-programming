#include<stdio.h>
#include<string.h>
void read(char s[5][100]);
void arrange(char s[5][100]);
void display(char s[5][100]);
int main()
{
	int i,j;
	char s[5][100];
	read(s);
	arrange(s);
	display(s);
	return 0;
}

void read(char s[5][100])
{
	int i;
	for(i=0;i<5;i++)
	{
		gets(s[i]);
	}
}
void arrange(char s[5][100])
{
	int i,j;
	char temp[5];
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-1;j++)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
}

void display(char s[5][100])
{
	int i;
	for(i=0;i<10;i++)
	{
		puts(s[i]);	
	}
}
