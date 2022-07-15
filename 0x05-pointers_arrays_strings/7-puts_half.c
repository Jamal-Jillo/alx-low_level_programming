#include <stdio.h>
#include "main.h"
/**
 * puts_half - this function prints half of a string
 * @str: pointer
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		putchar(str[i]);

	putchar('\n');
}
