#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _print_s(char *str);
int _print_all(char forspec, va_list args);
int _print_d(long int number);
int _pow(int base, int pow);
int _dtob(int num);
int _add_to_buffer(char s, char *buffer);
void _twoscomplement(char *buffer);

#endif
