#include "main.h"
/**
 * puts2 - prints one character
 * @str: string
 * Return: string
 */
void puts2(char *str)
{
	int i = 0;
	int k = 0;
	char *m = str;
	int p;

	while (*m != '\0')
	{
		m++;
		i++;
	}
	k = i - 1;
	for (p = 0; p <= k; p++)
	{
		if (p % 2 == 0)
		_putchar(str[p]);
	}
	_putchar('\n');
}
