#include <unistd.h>
#include "main.h"
/**
 * main - prints _putchar as message
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
