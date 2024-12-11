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
void printString(char str[])
{
    for (int i = 0; i < strLen(str); ++i)
    {
        printf("%c ", str[i]);
    }
}
int main()
{
    char str[] = {"Hello world"};
    printString(str);
}