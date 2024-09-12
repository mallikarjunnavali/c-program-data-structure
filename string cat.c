#include<stdio.h>
#include<string.h>
int main(){
  int n;
  char str[100],str1[100];
 
  printf("Enter the name1");
  scanf("%s",str);
  printf("Enter the name2");
  scanf("%s",str1);
  strcat(str,str1);
  printf("The concatenated string is %s",str);
  
  }
