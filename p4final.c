#include <stdio.h>
int input(){
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
void input_array(int n, int a[n]){
  for(int i=0;i<n;i++){
    printf("Enter the element no %d of the array\n",i);
    scanf("%d",&a[i]);
  }
}
int array_sum(int n, int a[n]){
  int sum=0;
  for(int i=0;i<n;i++){
    sum += a[i];
  }
  return sum;
}
int output(int n,int a[n],int sum){
  int i;
  printf("The sum of");
  for(i=0;i<n-1;i++){
    printf("%d + ", a[n]);
  }
  printf("%d = %d\n", a[i], sum)
}
int main(){
  int n, sum;
  n=input();
  input_array(n,a);
  sum=input_array(n,a);
  output(n,a,sum);
  return 0;
}