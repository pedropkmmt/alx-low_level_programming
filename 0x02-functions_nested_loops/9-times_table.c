#include "main.h"
#include <ctype.h>
#include <stdio.h>
void times_table(void)
{
	int i;
	int a;
	int result;

	for (i = 0; i < 10; i++)
	{
	for ( a = 0; a < 10; a++)
	{
	result = i * a;
_putchar(result);
	}
	}
	_putchar('\n');
}
