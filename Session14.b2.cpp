#include<stdio.h>
#include<string.h>

 int main(){
    char a[100];
    printf("Moi ban nhap vao 1 so bat ki : ");
    fgets(a,100,stdin);
    printf("Chuoi ki tu vua nhap la :  ");
     for(int i=0;i < strlen(a)-1;i++){
     	printf("%c ",a[i]);
     }
 }
