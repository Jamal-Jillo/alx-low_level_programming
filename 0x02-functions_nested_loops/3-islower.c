#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _islower - islower
 * Description: finds lower case
 * Return: 0
 */
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
