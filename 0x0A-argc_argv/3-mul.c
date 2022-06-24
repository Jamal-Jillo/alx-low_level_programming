#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two intergers
 * @argc: argument counter
 * @argv: argument vector
 * @a: first string index
 * @b: second string index
 * @c: multiplication result
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
	}
	printf("%d\n", c);
	return (0);
}
