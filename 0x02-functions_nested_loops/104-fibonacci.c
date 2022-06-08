#include <stdio.h>
/**
 * main - main block
 * Description: first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, next = 0, i = 1;

	while ( i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu" next);
		if (i < 97)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
