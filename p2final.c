#include <stdio.h>
int input()
{
  int a;
  printf("Enter the value\n");
  scanf("%d",&a);
  return a;
}
int com(int a,int b,int c)
{
  int big;
  if(a>b && a>c)
  {
    big=a;
  }
  else if(b>c)
  {
    big=b;
  }
  else
  {
    big=c;
  }
  return big;
}
void output(int big)
{
  printf("The largest number is %d", big);
}
int main()
{
  int a,b,c,big;
  a=input();
  b=input();
  c=input();
  big=com(a,b,c);
  output(big);
  return 0;
}