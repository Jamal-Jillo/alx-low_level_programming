#include "main.h"
/**
 * _strstr - a function that returns the substring
 * @haystack: string pointer that will be scanned
 * @needle: string pointer that will be searched
 * Return: void
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			while (needle[j] == haystack[i])
			{
				p = &haystack[i];
			}
			return (p);
		}
	}
	return (0);
}
