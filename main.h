#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>

/**
<<<<<<< HEAD
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
=======
  *struct op - Struct op
  *@op: The operator
  *@f: The function
  */
>>>>>>> 3a470f541044878857aeb4e55f27581635875bb9

typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

int _putchar(char c);
<<<<<<< HEAD
int p_char(va_list valist);
int p_string(va_list valist);
int p_int(va_list valist);
int p_d_int(va_list valist);
int p_bin(va_list valist);
int p_uint(va_list valist);
int p_oct(va_list valist);
int p_x_min(va_list valist);
int p_x_may(va_list valist);
int valid_args(const char **format, va_list valist);

int _printf(const char *format, ...);

#endif /* _MAIN_H_*/
=======
int valid_args(const char **fmt, va_list ap);
int _printf(const char *fmt, ...);
int p_int(va_list ap);
int p_d_int(va_list ap);
#endif
>>>>>>> 3a470f541044878857aeb4e55f27581635875bb9
