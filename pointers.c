#include<stdio.h>
void main(){
  int *a;
  int d=10;
  a=&d;
  printf("Address of d is %d\n",a);
  printf("Value of d is %d\n",*a);
}