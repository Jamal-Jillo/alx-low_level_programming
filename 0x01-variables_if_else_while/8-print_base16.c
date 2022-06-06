#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print from 0-16
 * Return: 0
 */
int main(void)
{
	char a = '0';
	char c = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
return 0;
}
