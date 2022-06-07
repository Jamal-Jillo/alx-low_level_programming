#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * Decription: this code prints alphabets
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	return (0);
}
