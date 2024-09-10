#include <stdio.h>

int main(void) {
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  if(num>0){
    printf("The number is positive");
  }
  else if (num<0){
    printf("it is a negative number");
  }
  else{
    printf("it is zero");
  }
  return 0;
}