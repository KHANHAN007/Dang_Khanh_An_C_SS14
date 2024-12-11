#include <stdio.h>

int strLen(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
void solve(char str[])
{
    int cnt[26] = {0};
    for (int i = 0; i < strLen(str);++i)
    {
        cnt[str[i] - 'a']++;
    }
    for (int i = 0; i < strLen(str);++i)
    {
        if(cnt[str[i]-'a'])
        {
            printf("%c: %d\n", str[i], cnt[str[i] - 'a']);
            cnt[str[i] - 'a'] = 0;
        }
    }
}
int main()
{
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    solve(str);
}