#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */

struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */

typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/************ FUNCTIONS **************/

/* Funtions to print chars and strings */
int print_char(va_list types, char buffer[],
int print_string(va_list types, char buffer[],

int print_percent(va_list types, char buffer[],
	

/* Functions to print numbers */
int print_int(va_list types, char buffer[],
int print_binary(va_list types, char buffer[],
int print_unsigned(va_list types, char buffer[],
int print_octal(va_list types, char buffer[],
int print_hexadecimal(va_list types, char buffer[],
int print_hexa_upper(va_list types, char buffer[],

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],


/* Funcion to print memory address */
int print_pointer(va_list types, char buffer[],


/* Funciotns to handle other specifiers */
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],

#endif
