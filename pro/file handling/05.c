#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fhand;
	char sen[20];
	fhand = fopen("cw_1.txt", "w");
	if(fhand==NULL) {
		printf("Failed to create file.");
		EXIT_FAILURE;
	}
	printf("Enter a sentence: ");
	
	fgets(sen, 20, stdin);
	fputs(sen, fhand);
	fclose(fhand);
	return 0;
}
