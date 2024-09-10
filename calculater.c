#include <stdio.h>

int main() {
  int a,b;
  char oper;
  printf("enter the num1:");
  scanf("%d",&a);
  printf("Enter the num2:");
  scanf("%d",&b);
  printf("Enter the operaters:");
  scanf(" %c",&oper);
  if(oper=='+'){
    printf("the sum is %d",a+b);
  }
  else if(oper=='-' ){
    printf("the sub is %d",a-b);
  }
  else if(oper=='*'){
    printf("the mul is %d",a*b);
  }
  else if (oper=='/'){
    if (b!=0){
      printf("the division is %d\n",a/b);
    }
    else{
      printf("division by zero is not allowed,\n");
    }
  }else("invalid operationns");

}
 