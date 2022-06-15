#include <stdio.h>
#include "main.h"
/**
 * *_strncat - concatenate tow strings
 * @src - pointer
 * @n - pointer
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
    /*declare and define destination len*/
    int dest_len, i;

    /*find the length of destination string*/
    for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
    ;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';

    return (dest);
}