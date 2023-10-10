#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 *print_sign - checks if n is less or greater than 0
 *@n: parameter to be checked
 *Return: returns number based of statement
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+')
	return (1);
}
	else if (n = 0)
{
	_putchar(0);
	return (0);
}
        else if(n < 0)
{
	_putchar('-');
	return (-1);
}
else 
return (0);
}
