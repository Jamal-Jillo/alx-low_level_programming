#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverse a string function
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (s[i])
	{
		i--;
	}
}
