#include "main.h"
#include <unistd.h>

/**
 * print_sign - prints the sign
 *
 * Description: prints the sign of a number
 *
 * Return: 1
 * @n:input
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
return (0);
}
