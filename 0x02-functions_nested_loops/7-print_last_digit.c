#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * print_last_digit - prints last digit of a number
 * i: function parameter
 * Return: returns a
 */
int print_last_digit(int i)
{
	int a;
	a = i % 20;
	if (i < 0)
		a =-a;
	_putchar(a + '0');
	return (a);

}
