<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(X)((void)(x))
#define buff_size 1024

/* FLAGS */
#define F_ZERO
#define F_HASH
#define F_PLUS
#define F_MINUS
#define F_SPACE

/* SIZE */
#define S_LONG
#define S_SHORT

/**
 * struct fmt- structure option
 * @fmt: format
 * @fn: associated function
 */

struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int);
}

/**
 * typedef struct formart_t- structure description
 * @format: the format
 * @fm_t: associated function
 */

typedef struct format

int_printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

#endif


=======
#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int hey_putchar(char c);
int _printf(const char *format, ...);

#endif
>>>>>>> d5d9fd46c5cac660b474a9987329745c7ac3ae67
