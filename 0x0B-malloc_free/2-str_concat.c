#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * str_concat - function that concatenates two strings
 * @s1: string one
 * @s2:string two
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *m;
	int total = 0;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	total = size1 + size2;
	m = malloc((total) * sizeof(char) + 1);
	if (m == 0)
		return (0);
	for (i = 0; i <= total; i++)
	{
		if (i < size1)
		{
			m[i] = s1[i];
		}
		else
		{
			m[i] = s2[i - size1];
		}
		m[i] = '\0';
		return (m);
	}
	return (0);
}
