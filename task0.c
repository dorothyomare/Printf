#include "main.h"
/**
 * _printf - prints formatted text on the standard output
 *
 * @format: format specifier
 * return: the number of bytes that have been printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
		          hey_putchar(format[i]);
		}
                if (format[i] == '%' && format[i + 1] == 'c')
		{
		     hey_putchar(va_arg(args, int));
		}
		count += 1;
	}

	return (count)
}
