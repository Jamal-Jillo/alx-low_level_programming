#include "main.h"
#include <string.h>
/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: string
 * Return: 0
 */
int is_palindrome(char *s)
{
	int i = length_of_str(s) - 1;
	return (_check(i, 0, s));
}
/**
 * length_of_str - function that counts the number of characters
 * @s: string that wil be counted
 * Return: 0
 */
int length_of_str(char *s)
{
	if (*s != '\0')
		return (length_of_string(s + 1));
	return (0);
}
/**
 * _check - function that checks if a string is a palindrome
 * @r: index of character starting from the right side
 * @l: index of character starting from the left side
 * @p: string that will be checked wether palindrome or not
 * Return: 0 or 1
 */
int _check(int r, int l, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (_check(r - 1, l + 1, p));
}
