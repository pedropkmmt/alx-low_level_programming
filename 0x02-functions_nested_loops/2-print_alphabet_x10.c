#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet in small letters 10x
 *Return: always returns 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for(ch = 0; ch < 10; ch++)
{
	for(i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
}
