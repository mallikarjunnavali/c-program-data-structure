#include<stdio.h>
int main(){
  int n,originalNum,reverseNum=0,remainder,iteration=1;
  printf("Enter the number");
  scanf("%d",&n);
  originalNum=n;
  while(n!=0){
    remainder=n%10;
    reverseNum=reverseNum*10+remainder;
    printf("Iteration %d: remainder=%d,revesenum=%d\n",iteration,remainder,reverseNum);
    n=n/10;
    }
  if (originalNum==reverseNum)
    printf("%d is a palindrome number",originalNum);
  else{
    printf("%d" is not a palindrome number",originalNum);
    }
  
}