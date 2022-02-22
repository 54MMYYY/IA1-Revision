#include <stdio.h>
int input_array_size(){
  int a;
  printf("Enter the size of the array: ");
  scanf("%d",&a);
  return a;
}
void input_array(int n, int *a){
  printf("Enter the values\n");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n, int a[n]){
  int sum=0;
  for(int i=0;i<n;i++){
    sum += a[i];
  }
  return sum;
}
void output(int n,int a[n],int sum){
  int i;
  printf("The sum of");
  for(i=0;i<n-1;i++){
    printf("%d + ", a[n]);
  }
  printf("%d = %d\n", a[i], sum);
}
int main(){
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum = input_array(n,a);
  output(n,a,sum);
}