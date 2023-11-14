#include <stdarg.h>
#include <stdio.h>


/**
 * _printf - Prints the given format string
 * @format: The format string
 *
 * Return: The number of characters printed
 */


int _printf(const char *format, ...) {
    va_list args;
    const char *p;
    char *val;
    char *c;
    int count = 0;

    va_start(args, format);

    for (p = format; *p != '\0'; p++) {
        if (*p != '%') {
            putchar(*p);
            count++;
            continue;
        }

        p++;

        switch (*p) {
        case 'c': {
            char val = va_arg(args, int);
            putchar(val);
            count++;
            break;
        }
        case 's': {
            val = va_arg(args, char *);
            for (c = val; *c != '\0'; c++) {
                putchar(*c);
                count++;
            }
            break;
        }
        case '%':
            putchar('%');
            count++;
            break;
        }
    }

    va_end(args);

    return count;
}

