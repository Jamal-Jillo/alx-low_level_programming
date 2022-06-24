#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_number - function that checks if string is a number
 * @str: str pointer
 * Return: 0 or 1
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (1);
		}
	}
	return (0);
}
/**
 * main - function that adds two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (is_number(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}

