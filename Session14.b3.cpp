#include<stdio.h>
#include<string.h>
int main() {
 char a[100];
 printf("Moi ban nhap :");
  fgets(a,100,stdin);
  printf("Xau ki tu da khai bao :");
   for(int i=strlen(a) -2;i>= 0;i--){
    printf("%c",a[i]);
    }
}
