#include "main.h"
#include <string.h>
/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: string
 * Return: 0
 */
int is_palindrome(char *s)
{
	int f = 0;
	int l = strlen(s);

	if (s[f] == s[l])
		return (1);
	else if (s[f] > s[l])
		return (1);
	else if (s[f] != s[l])
		return (0);
	return (is_palindrome(*s, f + 1, l - 1));
}
