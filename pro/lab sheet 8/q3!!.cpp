
//wap to find greatest among three number using pointer
#include<stdio.h>
int main()
{
	int b ,c ,a ,*i , *j, *k  ;


		printf("enter number \n");
		scanf("%d%d%d\n",&a,&b,&c);
		i=&a;
 		j=&b;
 		k=&c;
        
		if((*i>*j) && (*i>*k))
		{
		printf("greatest number= %d",*i);	
		}
		else if	((*j>*k)  && (*j>*i))
		{
		printf("greatest number= %d",*j);
	    }
		else
		{
			printf(" greatest number= %d",*k);
		}

return 1;
}
