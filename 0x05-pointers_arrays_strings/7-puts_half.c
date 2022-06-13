#include <stdio.h>
#include "main.h"
/**
 * puts_half - this function prints half of a string
 * @str - pointer
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	;
	for (i /= 2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
