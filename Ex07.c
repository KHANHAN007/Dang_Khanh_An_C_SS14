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
void check(char str[])
{
    int countChar = 0, countNum = 0, countSpecialChar = 0;
    for (int i = 0; i < strLen(str);++i)
    {
        int c = str[i];
        if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
            countChar++;
        else if(c>=48 && c<=57)
            countNum++;
        else
            countSpecialChar++;
    }
    printf("So ky tu la chu cai: %d ", countChar);
    printf("\nSo ky tu la chu so: %d ", countNum);
    printf("\nSo ky tu la ky tu dac biet: %d ", countSpecialChar);
}
int main()
{
    char str[] = {"Hello my gmail is test123@gmail.com"};
    check(str);
}
