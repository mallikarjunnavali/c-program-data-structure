#include<stdio.h>
int main(){
  int i,flag=0,n;
  printf("Enter the number:");
  scanf("%d",&n);
  if(n<2){
    printf("Not a prime number");
    return 0;
  }
  for(i=2;i<n;i++){
    if(n%i==0){
      flag=1;
      break;
    }
  }
  if(flag==0){
    printf("prime number");
  }
  else{
    printf("Not a prime number");
  }
}
