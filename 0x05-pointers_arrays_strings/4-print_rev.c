#include "main.h"
/**
 * print_rev - reverse
 * @s: string
 * return: 0;
 */
void print_rev(char *s)
{
	int i = 0;
	int k;

	while (*s != '\n')
	{
		i++;
		s++;
	}
	s--;
	for (k = i; k > 0; k--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
