#include <stdarg.h>
#include <unistd.h>

/**
 * _printf- a fuction that produces output acording to format
 * @format: format string
 * Return: total number of characters printed
 */
int _printf(const char *format, ...)
{
	int total;

	va_list args;

	va_start(args, format);

	while (format && *format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			total++;
		}
		else if (*(format + 1) == '%')
		{
			write(1, "%", 1);
			total++;
			format++;
		}
		else if (*(format + 1) == 'c')
		{
			char c = va_arg(args, int);

			write(1, &c, 1);
			total++;
			format++;
		}
		else if (*(format + 1) == 's')
		{
			char *s = va_arg(args, char *)

				if (s)
				{
					while (*s)
					{
						write(1, s, 1);
						s++;
						total++;
					}
				}
				else
				{
					while (1, "(null)", 6)
						total += 6;
				}
			format++;
		}
		else
		{
			write(1, format, 1);
			total++;
		}
		format++;
	}
	va_end(args);
	return (total);
}
