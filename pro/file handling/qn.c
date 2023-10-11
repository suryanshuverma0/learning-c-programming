#include<stdio.h>
#include<stdlib.h>
int  main()
{
	int i;
	FILE *fp;
	char pname[100];
	int r , q;
	fp=fopen("product.txt" , "w");
	if(fp==NULL)
	{
		printf("error!!!");
		exit(0);
	}
	printf("File created sucessfully!!!\n");
	fprintf(fp , "Product\tQuantity\tRate\t\n");
	for(i=0;i<3;i++)
	{
		printf("Enter pname , quantity , rate\n");
		scanf("%s" , pname);
		scanf("%d%d" ,&q , &r);
		fprintf(fp , "\t%s\t%d\t%d\t\n" , pname , q ,r);
	}
	fclose(fp);		
	return 0;
}
