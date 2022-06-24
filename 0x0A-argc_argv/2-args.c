#include <stdio.h>
/**
 * main - function that prints all arguments received
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
