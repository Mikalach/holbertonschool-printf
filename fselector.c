#include "header.h"

/**
 * _printf - function that is a printf clone
 * @format: a character string
 *
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
	type_t type[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_per},
		{"d", print_int},
		{"i", print_int},
		{"\0", NULL}
	};
	va_list vaptr;
	int count = 0;

	va_start(vaptr, format);
	count = get_print(format, type, vaptr);
	va_end(vaptr);
	return (count);
}
