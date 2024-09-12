#include<stdio.h>
int main(){
  int pos=2,value=10;
  int arr[5]= {1,2,3};
  {
  arr[pos]=value;
  for(int i=0;i<5;i++){
      printf("%d",arr[i]);
    }
  }
}