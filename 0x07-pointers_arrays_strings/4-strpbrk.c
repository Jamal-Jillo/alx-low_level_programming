#include "main.h"
/**
 * _strpbrk - function that return the first same character
 * @s: string pointer to be scanner
 * @accept: string pointer to search
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *p;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
