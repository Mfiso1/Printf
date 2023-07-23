#include "main.h"

int _putchar(char x);

int main()
{
	char *check = "Hello";

		for (int i = 0;  check[i] != '\0'; i++)
		{
			_putchar(check[i]);
		}
		_putchar('\n');
	return (0);
}
