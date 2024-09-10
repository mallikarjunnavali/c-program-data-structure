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
  switch(oper){
    case '+':
    printf("The sum is %d",a+b);
    break;
    case '-':
    printf("The sub is %d",a-b);
    case '*':
    printf("The mul is %d",a*b);
    case '/':
     if (b!=0){
       printf("The div is %d",a/b);
       break;
     }
  }
}