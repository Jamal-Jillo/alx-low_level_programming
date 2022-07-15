#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - print a string in reverse
 * @s: pointer
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
