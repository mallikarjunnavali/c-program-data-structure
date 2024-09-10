#include <stdio.h>

int main(void) {
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  if(num%2==0){
    printf("The number is even");
  }
  else{
    printf("it is a odd number");
  }
  
  return 0;
}