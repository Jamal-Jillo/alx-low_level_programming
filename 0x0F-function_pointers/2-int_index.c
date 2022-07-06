#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Finds index of an integer in an array
 * @array: Array of integers
 * @size: Size of the array
 * @cmp: Function to compare two integers
 * Return: Index of the integer or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0)
			return (i);
	}
	return (-1);
}
