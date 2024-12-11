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
int countWord(char str[])
{
    int count = 0;
    int check = 0;

    for (int i = 0; i < strLen(str); ++i)
    {
        if (str[i] == ' ' || str[i] == '\n')
            check = 0;
        else if (!check)
            check = 1;
            count++;
    }
    return count;
}

int main()
{
    char str[] = {"Hello world"};
    printf("Chuoi '%s' co so tu la: ", str, countWord(str));
}