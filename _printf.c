#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - is a handmade printf function
 * it allows us to display the input in the output
 *
 */

int _printf(const char *format, ...)
{
    va_list args;
    const char *p;

    if (format == NULL)
        return (0);

    va_start(args, format);

    for (p = format; *p != '\0'; p++)
    {
        if (*p != '%')
        {
            _putchar(*p);
        }
        else
        {
            int n;
            unsigned int num;

            p++;

            if (*p == '\0')
                break;

            if (*p == 'c')
            {
                char c = (char)va_arg(args, int);

                _putchar(c);
            }
            else if (*p == 's')
            {
                char *s = va_arg(args, char *);

                if (s == NULL)
                    s = "(null)";

                while (*s != '\0')
                {
                    _putchar(*s);
                    s++;
                }
            }
            else if (*p == 'd' || *p == 'i')
            {
                n = va_arg(args, int);

                if (n < 0)
                {
                    _putchar('-');
                    num = (unsigned int)(-n);
                }
                else
                {
                    num = (unsigned int)n;
                }

                if (num == 0)
                {
                    _putchar('0');
                }
                else
                {
                    char digits[10];
                    int i = 0;

                    while (num != 0)
                    {
                        digits[i] = (num % 10) + '0';
                        num = num / 10;
                        i++;
                    }

                    while (i > 0)
                    {
                        i--;
                        _putchar(digits[i]);
                    }
                }
            }
            else if (*p == '%')
            {
                _putchar('%');
            }
            else
            {
                _putchar('%');
                _putchar(*p);
            }
        }
    }

    va_end(args);
    return (0);
}
