#include <stdio.h>
void input(int *pa, int *pb)
{
  printf("Enter 2 numbers: ");
  scanf("%d%d",pa,pb);
}
void add(int a, int b, int *c)
{
  *c=a+b;
}
void output(int a, int b, int c)
{
  printf("The sum of %d and %d is %d",a,b,c);
}
int main()
{
  int a,b,c;
  input(&a,&b);
  add(a,b,&c);
  output(a,b,c);
  return 0;
}