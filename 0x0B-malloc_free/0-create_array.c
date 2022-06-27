#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: parameter
 * @c: character c
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *t = malloc(size);

	if (size == 0)
	{
		return (0);
	}
	while (size--)
		t[size] = c;
	return (t);
	free(t);
}
