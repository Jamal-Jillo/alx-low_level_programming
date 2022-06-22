#include "main.h"
/**
 * _sqrt_recursion - function that returns sqrt of a number
 * @n: interger
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - finds the root
 * @n: integer
 * @result: result of root
 * Return: 0
 */
int square(int n, int result)
{
	if (result * result == n)
		return (result);
	else if (result * result < n)
		return (square(n, result + 1));
	else
		return (-1);
}
