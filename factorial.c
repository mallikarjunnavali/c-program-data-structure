#include<stdio.h>
int main(){
  int n,factorial=1;
  printf("Enter the positive number:");
  scanf("%d",&n);
  int i=n;
  if(i>=0);
  while(i>=1){
    factorial=factorial*i;
    i--;
  }
  printf("the factorial of %d is %d",n,factorial);
}