#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string pointer to be checked
 * @accept:string pointer to be matched
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (match);
}
