#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>

/**
  *struct op - Struct op
  *@op: The operator
  *@f: The function
  */

typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

int _putchar(char c);
int valid_args(const char **fmt, va_list ap);
int _printf(const char *fmt, ...);
int p_int(va_list ap);
int p_d_int(va_list ap);
#endif
