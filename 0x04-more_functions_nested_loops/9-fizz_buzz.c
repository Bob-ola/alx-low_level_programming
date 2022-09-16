#include <stdio.h>

/**
 * main - prints 0 to 100 and multiples of 3 as fizz, multiples of 5 as buzz and multiples of both as fizzbuzz
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	i = 1;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" fizzbuzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	_putchar('\n');
	return (0);
}
