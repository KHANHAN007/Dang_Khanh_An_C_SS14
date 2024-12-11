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
int checkCharter(char str[])
{
    int count = 0;
    for (int i = 0; i < strLen(str);++i)
    {
        int c=str[i];
        if(c>=65 && c<=90 || c>=97 && c<=122)
            count++;
    }
    return count;
}
int main()
{
    char str[] = {"ad34jg 324g1g2g2 klcc1"};
    printf("%d", checkCharter(str));
} 