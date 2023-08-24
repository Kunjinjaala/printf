#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, chars_print = 0;
	char c, *str;
	va_list list_arg;
	
	if(format == NULL)
		return(-1);

	va_start(list_arg, format);

	while(*format)
	{
		if(*format != '%')
		{
			write(1, format, 1);
			chars_print++;
		}

		else
		{
			format++;
			if (*format = '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				chars_print++;
			}

			if (*format == 'c')
			{
				c = va_arg(list_arg, int);
				write(1, %c, 1);
				chars_print++;
			}

			if (*format == 's')
			{
				*str = va_arg(list_arg, char*);
				for (i = 0; str[i] != '\0'; ++i);

				write(1, str, strlen);
				chars_print += strlen;
			}
		}

		format++;

	}

	va_end(list_args);

	return(chars_print);
}
