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
void reverseString(char str[])
{
    for (int i = 0; i < strLen(str)/2; ++i)
    {
        char tmp = str[strLen(str) - i - 1];
        str[strLen(str) - i - 1] = str[i];
        str[i] = tmp;
    }
}
void printString(char str[])
{
    reverseString(str);
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