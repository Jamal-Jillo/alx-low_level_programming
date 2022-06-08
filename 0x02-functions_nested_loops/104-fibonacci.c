#include <stdio.h>
/**
 * main - main block
 * Description: first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 0, b = 1, next = 0;
	int i = 0;

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);
		if (i < 97)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
