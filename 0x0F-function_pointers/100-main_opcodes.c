#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that prints the opcodes of the main function
 * @argc: the number of arguments passed to the program
 * @argv: the array of arguments passed to the program
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcodes = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", opcodes[i]);
			break;
		}
		printf("%02hhx ", opcodes[i]);
	}
	return (0);
}
