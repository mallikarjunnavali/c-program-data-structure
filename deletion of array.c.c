#include<stdio.h>

int main(){
  int arr[5] = {1,2,3,4,5};
  int pos = 2;
  for(int i=pos; i<4; i++){
    arr[i] = arr[i+1];
  }
  for(int i=0; i<4; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}