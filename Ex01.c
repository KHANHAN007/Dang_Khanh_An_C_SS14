#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Chuoi vua nhap: %s", str);
    printf("\nDo dai cua chuoi: %d", strlen(str));
}