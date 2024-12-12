#include <stdio.h>
#include<string.h>
int main() {
    char str[] = "Rikkei Education";  
    char a;
    int count = 0;
    printf("Nhap vao mot ky tu: ");
    scanf("%c", &a);
    for (int i = 0; i<strlen(str)-1; i++) {
        if (str[i] == a) {
            count++;
        }
    }
    printf("Ky tu ban kiem tra da xuat hien %d lan", count);

    return 0;
}

