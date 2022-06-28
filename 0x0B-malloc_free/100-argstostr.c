#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * argstostr - function that concatenates all the arguments
 * of your program.
 * @ac: int
 * @av: char
 * Return: char
 * c: count for the whole string
 * i: index for the first array of strings
 * j: index for the second array of strings
 * ia: index for inserting new line character
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);
/*finding the count of the 2D array*/
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
/*allocating memory for the string*/
	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}
/*add a new line after every word*/
	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			aout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			aout[ia] = av[i][j];
	}
	aout[ia] = '\0';
	return (aout);
}
