#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(const char *);

int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

int print_char(va_list);
int print_string(va_list);
int print_int(va_list args);
int print_binary(va_list);
int print_unsinged(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);
int _putchar(char ch);
int buffer(char ch);
int printf_percentage(void);



#endif

