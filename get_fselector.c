#include "main.h"

/**
 *get_print - returns count
 *@format: a character string
 *@type: specifiers being checked against
 *@vaptr: va pointer
 *Return:  the number of char printed
 */
int get_print(const char *format, type_t type[], va_list vaptr)
{
	int i, j;
	int count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}
		for (j = 0; type[j].d; j++)
		{
			if (*type[j].d == format[i + 1])
			{
				count += type[j].f(vaptr);
				break;
			}
		}
		i++;
		if (!type[j].d)
		{
			count += _putchar('%');
			count += _putchar(format[i]);
		}
	}
	return (count);
}
