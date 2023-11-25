#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _print_s(char *str);
int _print_all(char forspec, va_list args);
int _print_d(long int number);
int _pow(int base, int pow);
int _dtob(long int num);
int _add_to_buffer(char s, char *buffer);
int _twoscomplement(long int b, char *buffer);

#endif
