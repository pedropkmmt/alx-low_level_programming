#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *int_islower - checks if c is lower
 *Return: always returns 0;
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
