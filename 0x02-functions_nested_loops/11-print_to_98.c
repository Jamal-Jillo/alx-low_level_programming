#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_to_98 - print
 *
 * Description: prints all natural numbers
 *
 * Return: 0
 * @n:input
 */

void print_to_98(int n)
{
	while (n > 0 && n <= 98)
	{
		_putchar(n);
		n++;
	}

}
