Lab 10
1)
#include<conio.h>
#include<stdio.h>
#include<process.h>
void main()
{
	char ch;
	FILE *fp, *fptr;
	fp = fopen("d:\\Files\\Test.txt","w");
	if(fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Enter any characters: ");
	fflush(stdin);
	while((ch=getchar())!='\n')
	{
		fputc(ch,fp);
	}
	fclose(fp);
	fptr = fopen("d:\\Files\\Test.txt","r");
	if(fptr == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Reading From File......\n");
	printf("\nContents of file Test.txt is: ");
	while((ch = fgetc(fptr))!=EOF)
	{
		
		putchar(ch);
	}
	
	
//	fputc(ch,fptr);
	fclose(fptr);

}

2)
#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int rollNo;
    int age;
}s[5];
void main()
{
    int i;
    FILE *ptr;
    ptr = fopen("151_STUDENT.DAT","w");
   
    for(i=0;i<5;i++)
    {
        printf("Enter name,roll no and age of student %d:\n",i+1);
        fflush(stdin);
        gets(s[i].name);
        scanf("%d%d",&s[i].rollNo,&s[i].age);
    }
    fwrite(&s,sizeof(s),1,ptr);
    fclose(ptr);
    getch();   
}

3)
#include<stdio.h>
#include<conio.h>
struct student
{
    char name[30];
    int rollNo;
    char address[30];
    int marks;
}s[48],s1[48],temp;
void main()
{
    int i,j;
    FILE *ptr,*ptr1;
    ptr = fopen("152_Lab_10_Binary_file.txt","wb");
    for(i=0;i<48;i++)
    {
        printf("Enter name,address roll no and marks of student %d:\n",i+1);
        fflush(stdin);
        gets(s[i].name);
        fflush(stdin);
        gets(s[i].address);
        scanf("%d%d",&s[i].rollNo,&s[i].marks);
    }
    fwrite(&s,sizeof(s),1,ptr);
    fclose(ptr);

    ptr1 = fopen("152_Lab_10_Binary_file.txt","rb");
    fread(&s1,sizeof(s1),1,ptr1);
    fclose(ptr1);
    for(i=0;i<48-1;i++)
    // sorting structure in descending order in terms of marks 
    {
        for(j=0;j<48-1-i;j++)
        {
            if(s1[j].marks<s1[j+1].marks)
            {
                temp = s1[j];
                s1[j] = s1[j+1];
                s1[j+1] = temp;
            }
        }
    }
    printf("Detail of student having highest marks:\n");
    puts(s1[0].name);
    puts(s1[0].address);
    printf("%d\n%d",s1[0].rollNo,s1[0].marks);
    getch();
}

4)
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct writer
{
    char name[30];
    char natnlty[20];
    int nBooks;
}w[200],w1[200];
void main()
{
    FILE *p1,*p2;
    p1 = fopen("152_lab_10_4_writer.txt","w");
    int i=0;
    char c[4];
    do
    {
        printf("Enter name,nationality and number of books published of writer %d:\n",i+1);
        fflush(stdin);
        gets(w[i].name);
        fflush(stdin);
        gets(w[i].natnlty);
        scanf("%d",&w[i].nBooks);
        i++;
        printf("Enter no to stop:\n");
        fflush(stdin);
        gets(c);
    } while (stricmp(c,"no")!=0);
    fwrite(&w,sizeof(w),1,p1);
    fclose(p1);

    p2 = fopen("152_lab_10_4_writer.txt","r");
    fread(&w1,sizeof(w1),1,p2);
    fclose(p2);
    int n;
    printf("Enter number of writer whose detail is to be displayed: ");
    scanf("%d",&n);
    puts(w1[n-1].name);
    puts(w1[n-1].natnlty);
    printf("%d",w1[n-1].nBooks);
    getch();
}



