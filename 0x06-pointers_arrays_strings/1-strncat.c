#include "main.h"

/**
 * _strncat - concates two strings, with n bytes from 
 * the second string
 * @dest: first string
 * @src: second string
 * @n: the number of character in second string to be appended
 * 
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i = 0, k = 0;

    while (dest[i] != '\0')
        i++;
    while ((k < n) && src[k] != '\0')
    {
        dest[i] = src[k];
        k++;
        i++;
    }

    return (dest);
}