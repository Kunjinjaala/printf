#include "main.h"
#include "stdarg.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, d, chars_print = 0;
	int temp, num;
	char str;
	va_list list_arg;

	if (format == NULL)
		return (-1);

	va_start(list_arg, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			chars_print++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			else if (*format == 'd' || *format == 'i')
			{
				d = va_arg(list_arg, int);
                		temp = d;
                		num = 0;
                		if (temp == 0)
                			num = 1;
                		else
                		{
					for (temp != 0; temp /= 10; num++)
                		}
				str[num + 1];
				snprintf(str, num + 1, "%d", d);
				write(1, str, num);
				chars_print += num;
			}
			format++;
	va_end(list_arg);
	return (chars_print);
}
