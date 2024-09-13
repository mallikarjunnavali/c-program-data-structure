#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("Mallu.txt","r");
  fgets(c,5,fp);
  printf("Character is %c\n",c);
  fclose(fp);
  return 0;
}
