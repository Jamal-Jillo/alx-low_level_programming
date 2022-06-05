#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: a program that prints all possible
 * combinations part two
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar(48 + e);
					putchar(48 + d);
					putchar(48 + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
