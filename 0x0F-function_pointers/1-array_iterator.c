#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates through an array of integers
 * @array: array of integers
 * @size: size of the array
 * @action: function to be executed on each element of the array
 * return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
