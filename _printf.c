#include "main.h"

/*
 * Helper function to print a single character and update the count
 */
static void print_char(char ch, int *count) 
{
_putchar(ch);
(*count)++;
}

/*
 * Helper function to print a null-terminated string and update the count
 */
static void print_string(char *str, int *count) 
{
while (*str) 
{
_putchar(*str++);
(*count)++;
}
}

/*
 * _printf - Output inserted data to stdout, similar to printf
 * @format: The character string for data output
 *
 * Returns: The number of printed characters without the null byte
 */
int _printf(const char *format, ...) 
{
va_list args;
va_start(args, format);
int no_char_print = 0;
while (*format != '\0') 
{
if (*format != '%') 
{
print_char(*format, &no_char_print);
} 
else 
{
format++;
switch (*format) 
{
case 'c': 
{
char ch = (char)va_arg(args, int);
print_char(ch, &no_char_print);
break;
}
case 's': 
{
char *str = va_arg(args, char *);
print_string(str, &no_char_print);
break;
}
case '%':
print_char('%', &no_char_print);
break;
default:
print_char(*format, &no_char_print);
break;
}
}
format++;
}
va_end(args);
return no_char_print;
}
