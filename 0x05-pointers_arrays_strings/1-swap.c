#include <stdio.h>
#include "main.h"
/**
 * swap_int - function for swapping intergers
 * @a: first interger
 * @b: second interger
 * return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
