#include "main.h"

/**
 * print_number - prints numbers from 0 to 9 and a new line
 *
 * Return: no return
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
