#include <stdarg.h>
#include 'main.h'
/**
 * multiple function to create the different format
 * Return the inuput or NULL
 *
 */
int (*function_library(char format_specifier))(va_list))
{
	format array[] = {
		{"c", print_character},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	int i = 0;

	if (format_specifier == '\0')
		return (NULL);

	while (array[i].specifier != NULL)
	{
		if(array[i].specifier[0] == format_specifier)
			return (array[i].function);
		i++;
	}
	return (NULL);
}

/**
 * _putchar - a function that display the input
 * Return 1 if error
 */
int _putchar(c)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	return (1);
}

/**
 * print_character - a function that print character
 * Return 1
 */
int print_character(va_list args)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - a function that print a string
 *
 * Return the number of i character
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int i = 0;

	if (!str)
	str = "(null)";
	while (sr[i])
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_integer - a function that display the interger input
 *
 * Return the number of printed character
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
		int count = 0;
		long num;
		long diviser = 1;

		if (n < 0)
		{
			_putchar('-');
			count++
			num = -(long)n;
		}
		else
		{
			num = n;
		}
		while (num / diviser >= 10)
			diviser *= 10;
		while (diviser != 0)
		{
			_putchar((num / diviser) % 10 + '0');
			count++;
			divise /= 10;
		}
		return (count);
}
