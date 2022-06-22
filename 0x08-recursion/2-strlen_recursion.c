#include "main.h"
/**
 * _strlen_recursion - function that returns length of a string
 * @s: string pointer
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s > '\0')
	{
		n = 0;
		n++;
		_strlen_recursion(s + 1);
	}
	return (n);
}
