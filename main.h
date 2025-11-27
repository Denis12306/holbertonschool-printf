#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct format-specifier - type of specifier in input
 * @format : the type of data %, s, c, d, f...
 * @function : arguments of va_list
 * The structure allow us to connect a format to a function
 */
 int _putchar(char c);
 int print_strings(va_list args);
 int _printf(const char *format, ...);
 int print_character(va_list args);
 int print_integer(va_list args);
 int (*function_library(char s))(va_list);

 typedef struct format_specifier
 {
	 char *format;
	 int (*function)(va_list args);
 } f_spe;

#endif
