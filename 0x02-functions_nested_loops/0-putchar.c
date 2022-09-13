#include <stdio.h>
#include "_putchar.h"
/**
 * main - prints _putchar as message
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int c, sz;

	sz = sizeof(str) / sizeof(int);
	for (c = 0; c < sz; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
	return (0);
}
