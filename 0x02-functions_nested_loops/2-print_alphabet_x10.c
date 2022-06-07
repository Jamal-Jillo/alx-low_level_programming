#include "main.h"
#include <unistd.h>
/**
 * main - main block
 * Description: prints alphabet 10x
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
