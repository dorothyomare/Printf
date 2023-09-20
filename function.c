#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
va_list args;
int count = 0;
char c;

va_start(args, format);

while ((c = *format++) != '\0')
{
if (c == '%')
{
switch (*format++)
{
case 'c':
putchar(va_arg(args, int));
count++;
break;
case 's':
count += puts(va_arg(args, char *));
break;
case '%':
putchar('%');
count++;
break;
default:
putchar('%');
putchar(*(format - 1));
count += 2;
break;
}
}
else
{
putchar(c);
count++;
}
}

va_end(args);

return count;
}
int main()
{
_printf("Hello, %s!\n", "world");
_printf("The answer is %d\n", 42);
_printf("Printing a character: %c\n", 'A');
_printf("Printing a percent sign: %%\n");

return 0;
}

