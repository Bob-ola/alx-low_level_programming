#include <stdio.h>

/**
 * main - prints 0 to 100 and multiples of 3 as fizz, multiples of 5 as buzz and multiples of both as fizzbuzz
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d, i")
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" Fizzbuzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
