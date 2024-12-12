#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    int i, count = 0;
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(a, 100, stdin);
     for (i = 0; a[i] != '\0'; i++) {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
            count++;
        }
     }
    printf("So ky tu la chu cai trong chuoi la: %d\n", count);
    return 0;
}
