#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string function
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int i, length, half;

	for (length = 0; s[length] != '\0'; length++)
	;
	i = 0;
	half = length / 2;
	while (half--)
	{
		temp = s[length - 1 - i];
		s[length - i - 1] = s[i];
		s[i] = temp;
			i++;
	}
}
