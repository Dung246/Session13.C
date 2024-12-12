#include <stdio.h>
#include <string.h>
int main() {
    char a[100];  
    int count = 1;  
    int i = 0;
    printf("Moi ban nhap vao mot chuoi ki tu : ");
    fgets(a, 100, stdin);
    if (i<strlen(a)) {
        if(a[i] == ' '){
        	count++;
		}
		i++;
    }
    printf("So tu dem duoc trong chuoi  chuoi la : %d\n", count);
}
