#include <stdio.h>
#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer for destination
 * @src: pointer for source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, j;
    /*get the length of the destination array*/
	while (dest[len] != '\0')
	{
		++len;
	}
    /*concat src to dest*/
	for (j = 0; src[j] != '\0'; ++j, ++len)
	{
		dest[len] = src[j];
	}
    /* add '\0' to the end of the new string*/
	dest[len] = '\0';
	return (dest);
}
