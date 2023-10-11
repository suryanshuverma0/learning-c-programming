
#include<stdio.h>
struct student{
	char name;
	int roll;
	int mark;
};
	void percentage(struct student m[5]);
	int main()
	{
		struct student m[5];
		int i,j;
			printf("enter the name,roll, marks");
		for(i=0;i<5;i++)
		{
			scanf("%s",m[i].name);
		scanf("%d",&m[i].roll);
		for(j=0;j<5;j++)
		{
			scanf("%d",&m[i].mark[j]);
		}
		}
		percentage(m);
		
		
		return 0;
	}
		void percentage(struct student m[5])
		{
			int total=0,i,j;
			float percentage[5];
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j
gtx-kywz-ryp
