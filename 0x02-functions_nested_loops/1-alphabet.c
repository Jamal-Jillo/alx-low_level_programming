#include "main.h"
#include <unistd.h>
/**
 * main -main block
 * Description: print_alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
