#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string pointer
 * @c: character that will be searched
 * Return: void
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == 'c')
		{
			return (s + i);
		}
	}
	return ('\0');
}
