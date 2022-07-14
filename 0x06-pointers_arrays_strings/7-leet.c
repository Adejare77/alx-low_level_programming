#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string that will be encoded
 * 
 * Return: encoded string
 * Description: 
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 */
char *leet(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
    {
        if ((str[i] == 'a') || (str[i] == 'A'))
            str[i] = '4';
        if ((str[i] == 'e') || (str[i] == 'E'))
            str[i] = '3';
        if ((str[i] == 'o') || (str[i] == 'O'))
            str[i] = '0';
        if ((str[i] == 't') || (str[i] == 'T'))
            str[i] = '7';
        if ((str[i] == 'l') || (str[i] == 'L'))
            str[i] = '1';
    }

    return (str);
}