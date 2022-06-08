#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - prints
 *
 * Description: prints the last digit of a number
 *
 * Return: 0
 * @a:input
 */

int print_last_digit(int a)
{
	int last_digit;
	last_digit = a % 10;
	_putchar(last_digit);
}
