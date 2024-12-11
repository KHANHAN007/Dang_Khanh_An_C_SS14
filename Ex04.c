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
int findChater(char str[], char c)
{
    int count = 0;
    for (int i = 0; i < strLen(str);++i)
    {
        if(c==str[i])
            count++;
    }
    return count;
}
int main()
{
    char str[] = {"Hello world"};
    char c;
    printf("Nhap mot ky tu: ");
    scanf("%c", &c);
    printf("Ky tu %c xuat hien trong chuoi '%s' la: %d", c,str,findChater(str,c));
}