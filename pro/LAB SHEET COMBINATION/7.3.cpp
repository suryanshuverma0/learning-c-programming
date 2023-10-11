#include<stdio.h>

int main()
{
	int i,j,c=0,w=1;
	char sen[100];
	gets(sen);
	for(i=0;sen[i]!='\0';i++)
	{
		c++;
		if(sen[i]==' ')
		{
			w++;
		}
	}
	printf("The no of word is %d and character is %d" , w,c);
}
