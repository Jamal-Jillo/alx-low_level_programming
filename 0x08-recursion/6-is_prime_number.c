#include "main.h"
/**
 * is_prime_number - function that checks if int is prime number
 * @n: interger
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1)
		return (0);
	else if (n % 2 != 0)
		return (1);
	else
		return (0);
}
