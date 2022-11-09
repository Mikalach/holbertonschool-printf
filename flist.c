#include "header.h"


/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *Return: write
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - writes the character c to stdout
 * @vaptr: the character to print
 * Return: 1
 */

int print_char(va_list vaptr)
{
	_putchar(va_arg(vaptr, int));
	return (1);
}

/**
 * print_string - function that prints a string
 * @vaptr: the string to print
 * Return: i
 */

int print_string(va_list vaptr)
{
	int i = 0;
	char *s;

	s = va_arg(vaptr, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * print_per - Prints a percent
 * @vaptr: vaptr pointer
 * Return: 1
 */
int print_per(va_list vaptr __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
/**
 * _print_int - prints an integer
 * @vaptr: vaptr pointer
 * Return: number of numcharacter
 */

int print_int(va_list vaptr)
{
	int i;
	int count = 0;
	int n = va_arg(vaptr, int);

	if (n < 0)
	{
		count += _putchar('-');
	}
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 < 0)
				count += _putchar(-(n / i % 10) + '0');
			else
				count += _putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}
