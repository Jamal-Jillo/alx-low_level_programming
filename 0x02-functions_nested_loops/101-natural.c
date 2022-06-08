#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: natural numbers below 1024
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	int digit = 0;

	while (digit < 1024)
	{
		if (digit % 3 == 0 || digit % 5 == 0)
		{
			sum = sum + digit;
		}
		digit++;
	}
	printf("%i\n", sum);
	return (0);
}
