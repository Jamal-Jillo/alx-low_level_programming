#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that counts the number of change given
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 or 1 depending
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int i;
	int count = 0;

/* check if atleast one argument has been inputed*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
/* convert cents string to interger*/
	cents = atoi(argv[1]);
/* check if number entered is negative */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
/* iterate through the coins array checking size */
	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
