#include <stdio.h>

void swapnum(int *i, int *j) {
  int temp = *i;
  *i = *j;
  *j = temp;
}
int main(void) {
  int a,b;
  printf("Enter two number before swapping\n");
  scanf("%d%d",&a,&b);
  printf("Before swapping A=%d B=%d  \n",a,b);
 printf("After swapping \n");
  swapnum(&a, &b);
  printf("A is %d and B is %d\n", a, b);
  return 0;
}
