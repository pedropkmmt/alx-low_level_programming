#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 *_abs - checks the absolute value of an integer
 *Return: returns 0
 */
int _abs(int *a)
{
	return *a < 0 ? -*a: *a;
}
