#include <stdio.h>
#include <ctype.h>

void solve(char str[])
{
    int check = 0;
    for (int i = 0; i < str[i] != '\0'; ++i)
    {
        if (isalpha(str[i]))
        {
            if (!check)
            {
                str[i] = toupper(str[i]);
                check = 1;
            }
        }
        else
            check = 0;
    }
}
int main()
{
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    solve(str);
    printf("Chuoi sau khi viet hoa: %s", str);
}