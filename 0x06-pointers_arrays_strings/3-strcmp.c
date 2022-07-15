#include <stdio.h>
#include "main.h"
/**
 * _strcmp - function for comparing strings
 * @s1: string one pointer
 * @s2: strig two pointer
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
