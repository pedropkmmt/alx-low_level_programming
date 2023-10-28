#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 *_abs - checks the absolute value of an integer
 *@a: parameter of the function
 *Return: returns 0
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
