#include<stdio.h>
#include<string.h>
int main(){
  char str[100],str1[100];
 
  printf("Enter the name1");
  scanf("%s",str);
  printf("Enter the name2");
  scanf("%s",str1);
  int result =strcmp(str,str1);
  if(result==0){
    printf("The strings are equal\n");
  } else if(result<0){
    printf("%s comes before %s lexicograpicaly\n",str,str1); 
  }else{
      printf(" %s comes after %s lexicograpicaly\n",str,str1);
  }
  
  
  }
