#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

typedef struct fselect
{
	char *d;
	int (*f)(va_list vaptr);
} type_t;

int print_char(va_list vaptr);
int print_str(va_list vaptr);
int _putchar(char c);
int print_int(va_list vaptr);
int print_per(va_list vaptr);
int _printf(const char *format, ...);
int get_print(const char *format, type_t type[], va_list vaptr);
#endif
