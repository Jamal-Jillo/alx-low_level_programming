#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * state - state of the printf function whether it has met a % or not 
 * state = 0: no % has been met
 * state = 1: % has been met
 * 
 * 
 *  
 */
void vprintk(const char *fmt, va_list args)
{
	int state = 0;

	while (*fmt)
	{
		if (state == 0)
		{
				if (*fmt == '%')
					state = 1;
				else
					putchar(*fmt);
		}
		else if (state == 1)
		{
				switch (*fmt)
				{
				case 'c':/* character specifier */
					char ch = va_arg(args, int);
					putchar(ch);
					break;
				case 's': /* string specifier */
 					const char *str = va_arg(args, const char *);
					while(*str)
					{
						putchar(*str++);
					}
					break;
				/*case 'd': interger specifier
					int d = va_arg(args, int);
					if(d < 0)
					{
						d = -d;
						putchar('-');
					}
					puts(convert(d,10));
					break; */
				case 'p':
				}
				state = 0;
		}
		fmt++;
	}
	
}
/**
 * vprintk - printing function
 * @fmt: format string
 * @...: variable number of arguments
 *
 * Return: number of characters printed
 */
int _printf(const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	
	vprintk(fmt, args);
	
	va_end(args);
}
/*test wether the _printf function works*/
int main ()
{
	_printf("print a string : %s", "Hello World!");
	_printf("print a character: %c", 'M');
	_printf("print an interger: %d", 65);
}

char *convert(unsigned int num, int divider)
{
	char Options[] = "0123456789ABCDEF";
	char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Options[num % divider];
		num /= divider;
	} while (num != 0);
	
}