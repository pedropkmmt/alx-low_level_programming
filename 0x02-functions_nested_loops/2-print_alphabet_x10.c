#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet in small letters 10x
 *Return: always returns 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for(ch = 'a'; ch <= 'z'; ch++)
{
	for(i = 0; i < 10; i++)
		_putchar(ch);
}
_putchar('\n');
}
