#include <stdio.h>

int main(void) {
  int year;
  printf("enter a year");
  scanf("%d",&year);
  if(year%4==0){
    printf("%d is leap year",year);
  }
  else{
    printf("it is not a leap year");
  }
  return 0;
}