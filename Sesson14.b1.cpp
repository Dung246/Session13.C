#include<stdio.h>
#include<string.h>

 int main(){
  char a[100];
 printf("Nhap xau ki tu :");
 fgets(a,100,stdin);
 printf("Chuoi ki tu vua nhap la : %s\n",a);
 printf("So luong ki tu trong xau : %d\n",strlen(a));
 }
