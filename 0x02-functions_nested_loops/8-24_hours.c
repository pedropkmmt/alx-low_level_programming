#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * jack_bauer - prints minute of the day
 * Return: return void
 */
void jack_bauer(void)
{
	int i, a;

	for (i = 0; i < 24 ; i++)
	{
		for (a = 0; a < 60; a++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar('\n');
		}
	}
}
