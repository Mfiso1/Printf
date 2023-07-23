#include "main.h"

/**
 * _putchar - writes the character x to stdout
 * @x: The character to print
 *
 * Returns: Upon success, 1 is returned
 * And upon error, -1 is returned
 */

int _putchar(char x)
{
    return (write(1, &x, 1));
}
