#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int i,n,j;
	char ch[100];
	printf("Enter a sentence\n");
	gets(ch);
	for(i=0;ch[i]!='\0';i++);
	for(j=0;ch[j]!='\0';j++)
	{
		if(ch[j]=='t' && ch[j+1]=='h' && ch[j+2]=='e' && ch[j+3]==' ')
		{
			ch[j]='$';
			ch[j+1]='$';
			ch[j+2]='$';
		} 
	}
	puts(ch);
	return 0;
}