#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    if (format == NULL)
        return (-1);

    int printed_chars = 0;
    va_list list;

    va_start(list, format);

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            write(1, &format[i], 1);
            printed_chars++;
        }
        else
        {
            i++; // Move to the next character after '%'
            switch (format[i])
            {
            case 'c':
                printed_chars += write_char(va_arg(list, int));
                break;
            case 's':
                printed_chars += write_str(va_arg(list, char *));
                break;
            case '%':
                write(1, "%", 1);
                printed_chars++;
                break;
            default:
                write(1, "%", 1);
                write(1, &format[i], 1);
                printed_chars += 2;
                break;
            }
        }
    }

    va_end(list);

    return printed_chars;
}

