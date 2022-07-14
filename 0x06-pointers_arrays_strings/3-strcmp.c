#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * 
 * Return: An integer
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0, result;

    while ((s1[i] == s2[i]) && (s1[i] != '\0'))
        i++;
    result = s1[i] - s2[i];

    return (result);
}