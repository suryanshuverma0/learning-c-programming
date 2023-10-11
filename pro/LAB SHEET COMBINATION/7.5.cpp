#include<stdio.h>

int main()
{
	char sen[100];
	gets(sen);
	int i;
	for(i=0;sen[i]!='\0';i++)
	{
		if(sen[i]=='t' && sen[i+1]=='h' && sen[i+2]=='e' && sen[i+3]==' ')
		{
			sen[i]='$';
			sen[i+1]='$';
			sen[i+2]='$';
		}
	}
	printf("%s" , sen);
}
