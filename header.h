#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct fselect
{
	char *d;
	int (*f)(va_list vaptr);
} fselect;

int char_print(va_list vaptr);
int string_print(va_list vaptr);
int _putchar(char c);
int int_print(va_list vaptr);
int per_print(va_list vaptr);
int _printf(const char *format, ...);
#endif
