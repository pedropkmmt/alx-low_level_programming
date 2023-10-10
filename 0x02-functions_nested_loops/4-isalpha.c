#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 *  _isalpha - checks if c is upper or lower
 *  @c: parameter to be checked
 *  Return: always returns 0;
 */
int _isalpha(int c)
{
	if (c <= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
