#include <stdio.h>

void removeCharacter(char str[], char c)
{
    int i, j = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] != c)
            str[j++] = str[i];
    }
    str[j] = '\0';
}
int main()
{
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    char c;
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &c);
    removeCharacter(str, c);
    printf("Chuoi sau khi xoa: %s", str);
}