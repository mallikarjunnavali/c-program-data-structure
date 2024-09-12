#include<stdio.h>
int mallu(int a,int b);
int main(){
  int num1,num2,result;
  printf("Enter two numbers: ");
  scanf("%d %d",&num1,&num2);
  result=mallu(num1,num2);
  printf("result = %d",result);
}
int mallu(int a,int b){
  return a%b;
}