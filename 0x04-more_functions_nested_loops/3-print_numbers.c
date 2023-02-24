#include "main.h"
/**
*print_numbers - print 0123456789
* owned by stanley ogodie
* Return: Always 0 (success)
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
