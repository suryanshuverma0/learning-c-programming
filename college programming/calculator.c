#include<stdio.h>
#include<conio.h>
//function prototype
int add(a,b);
void main()
{
      // variable declaration
      float a , b;
      char op;
      // Taking input from users
      printf("Enter first number\n");
      scanf("%f" , &a);
      printf("Enter opreator\n");
      scanf("%c" , &op);
      printf("Enter second number\n");
      scanf("%f" , &b);
//      //Using switch
	switch(op)
	{
	case 1 :
		add(a,b);
		break;
	}
	
      }
      
      int add(a,b)
      {
      	float sum;
      	sum = a + b;
      	printf("sum is %f" , sum);
      }