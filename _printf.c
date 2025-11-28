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
    int count = 0;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    for (p = format; *p != '\0'; p++)
    {
        if (*p != '%')
        {
            _putchar(*p);
            count++;
        }
        else
        {
            int n;
            unsigned int num;

            p++;

            if (*p == '\0')
                return (-1);

            if (*p == 'c')
            {
                char c = (char)va_arg(args, int);
                _putchar(c);
                count++;
            }
            else if (*p == 's')
            {
                char *s = va_arg(args, char *);
                if (s == NULL)
                    s = "(null)";

                while (*s)
                {
                    _putchar(*s++);
                    count++;
                }
            }
            else if (*p == 'd' || *p == 'i')
            {
                n = va_arg(args, int);

                if (n < 0)
                {
                    _putchar('-');
                    count++;
                    num = (unsigned int)(-(long)n);
                }
                else
                {
                    num = (unsigned int)n;
                }

                if (num == 0)
                {
                    _putchar('0');
                    count++;
                }
                else
                {
                    char digits[12];
                    int i = 0;

                    while (num != 0)
                    {
                        digits[i++] = (num % 10) + '0';
                        num /= 10;
                    }

                    while (i--)
                    {
                        _putchar(digits[i]);
                        count++;
                    }
                }
            }
            else if (*p == '%')
            {
                _putchar('%');
                count++;
            }
            else
            {
                _putchar('%');
                _putchar(*p);
                count += 2;
            }
        }
    }

    va_end(args);
    return (count);
}
