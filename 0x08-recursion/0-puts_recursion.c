#include "main.h"

/**
 * _put_recursion - function
 * @s: parameter
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursions(s + 1);
	}
	else 
		_putchar ('\n');

}
