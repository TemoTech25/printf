#include "main.h"

/**
 * printf_helper - Helper function for _printf
 * @num: The number to print
 *
 * Return: The number of characters printed
 */
int printf_helper(int num)
{
    int count = 0;
    int temp, len;

    if (num < 0)
    {
        count += putchar('-');
        num *= -1;
    }

    temp = num;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    temp = num;
    while (temp != 0)
    {
        len = temp % 10;
        putchar(len + '0');
        temp /= 10;
        count++;
    }

    return (count);
}

/**
 * _printf - Prints the given format string
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i, count = 0;

    va_start(args, format);

    for (i = 0; format && format[i]; i++)
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'c':
                {
                    char c = va_arg(args, int);

                    count += putchar(c);
                    break;
                }
                case 's':
                {
                    char *s = va_arg(args, char*);

                    while (*s)
                    {
                        putchar(*s);
                        s++;
                        count++;
                    }
                    break;
                }
                case 'd':
                {
                    int num = va_arg(args, int);

                    if (num < 0)
                    {
                        count += putchar('-');
                        num *= -1;
                    }
                    count += printf_helper(num);
                    break;
                }
                default:
                    break;
            }
        }
        else
        {
            putchar(format[i]);
            count++;
        }
    }

    va_end(args);

    return (count);
}

