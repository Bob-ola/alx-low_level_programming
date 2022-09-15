#include "main.h"

/**
 * print_number - prints numbers from 0 to 9 and a new line.
 * Return: no return
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
