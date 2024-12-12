#include <stdio.h>
#include <string.h>

int main() {
    char str[100], a;
    strcpy(str, "hello world, o");
    printf("Nhap ky tu can xoa: ");
    scanf(" %c", &a);
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != a) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
    printf("Chuoi sau khi xoa: %s\n", str);

    return 0;
}
