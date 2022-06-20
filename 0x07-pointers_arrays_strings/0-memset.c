#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the beginning of the memory area
 * @b: value to be filled
 * @n: number of bytes to fill
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
